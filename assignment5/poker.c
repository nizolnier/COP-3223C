/* Nicole Zolnier - 08/06/21
Poker Game - not Poker Face by Lady Gaga, unfortunately
Based on the video that the professor sent and the code provided
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// creating the card structure, made with a face (value) and a suit (symbol)
struct card {
    int face;
    int suit;
};

// creating the hand structure which is made of 5 cards
struct hand {
    struct card cards[5];
};

// creating the deck that holds the cards generated 
struct deck{
    struct card dealtCards[52];
    int numDealtCards;
};

// here are the suits, faces and ranks as strings for translating later (the user wont understand what 2 2 1 0 means if we print so we gotta convert) (code provided by the video)
char *suitsInString[4] = {"Hearts","Clubs","Diamonds","Spades"}; // wished i could use emojis for this one :(
char *facesInString[13] = {"Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten","Jack","Queen","King","Ace"};
char *ranksInString[9] = {"High Card","One Pair","Two Pair","Three of a Kind","Straight","Flush","Full House","Four of a Kind","Straight Flush"};


// declaring all the functions
// functions that are inside main
void dealHands(struct hand *hand1, struct hand *hand2, struct deck *deck);
void printHands(struct hand *hand1, struct hand *hand2);
void analyzeHands(struct hand *hand1, struct hand *hand2);

// auxiliary functions
struct card dealACard(struct deck *deck);
int flush(int suits[]);
int straight(int faces[]);
int fourOfKind(int faces[]);
int threeOfKind(int faces[]);
int pairs(int faces[]);
int getRanking(int straight, int flush, int four, int three, int pairs);
int checkWinner(int rank1, int rank2);

int main (void){
    // declaring the two players and the deck
    struct hand player1, player2;
    struct deck ourDeck;

    // seeding the random number generator as always
    srand(time(NULL));

    // initializing the deck, at this point, no cards have been dealt
    ourDeck.numDealtCards = 0;

    // pass by reference the values and call the functions to do their thing
    dealHands(&player1, &player2, &ourDeck);
    printHands(&player1, &player2);
    analyzeHands(&player1, &player2);

    // and that's a wrap (not really because there are a lot of code bellow but it's a wrap for main)
    return 0;
}

// receives two hands (players) and the deck, then generates 5 cards for each hand by calling another function
void dealHands(struct hand *hand1, struct hand *hand2, struct deck *deck){
    // looping to fill the cards in each hand, one loop solves for both hands
    for(int i = 0; i < 5; i++){
        hand1->cards[i] = dealACard(deck);
        hand2->cards[i] = dealACard(deck);
    }
}

// receives the deck and returns a card that has not been dealt before
struct card dealACard(struct deck *deck) {
    // variable to know if the card matches any other card
    int isUnique;
    // card that will be returned
    struct card cardToDeal;

    // this generates a 'small' infinite loop but it ends when the card is found
    // the method of the video just wasn't working for me
    while(1){
        // generate a face from 0 to 12 (because our array of strings starts with index O)
        cardToDeal.face = rand()%13;
        // generate a suit from 0 to 3 (same reason as face)
        cardToDeal.suit = rand()%4;
        // up until here the card is still unique
        isUnique = 1;
        // but then we need to check if it matches with one of the cards from the deck that already have been dealt
        // for that we verify from 0 to the number of dealt cards
        for(int i = 0; i < deck->numDealtCards; i++){
            // if it matches with face and suit, then is no longer unique :(
            if(deck->dealtCards[i].face == cardToDeal.face && deck->dealtCards[i].suit == cardToDeal.suit)
                isUnique = 0;
        }
        // but then if it is unique...
        if(isUnique) {
            // add one to the count of dealt cards
            deck->numDealtCards++;
            // add the card to the deck for when it is searched again, it will not be unique again
            deck->dealtCards[deck->numDealtCards] = cardToDeal;
            // and finally return it 
            return cardToDeal;
        }
    }
}

// receives 2 hands (players) and displays their cards
void printHands(struct hand *hand1, struct hand *hand2){
    // declaring the index for the loops
    int i;
    // nice separation
    printf("======================\n");
    // nice warning of which player we are talking about
    printf("Player one has:\n");
    // loop 5 times (total of cards) and print by using the string array
    // it gets the string that matches the index of what's in the hand
    for(i = 0; i < 5; i++)
        printf("%s of %s\n", facesInString[hand1->cards[i].face], suitsInString[hand1->cards[i].suit]);
    // then do the same thing for player 2
    printf("======================\n");
    printf("Player two has:\n");
    for(i = 0; i < 5; i++)
        printf("%s of %s\n", facesInString[hand2->cards[i].face], suitsInString[hand2->cards[i].suit]);
    printf("======================\n");
}

// receives two hands, analyzes all their cards and prints out the winner by using a lot of auxiliary functions
// this is code is the code from the assignment but i decided to split the cases into functions because then i repeat less code and reuse more
// reuse, reduce and recycle am i right
void analyzeHands(struct hand *hand1, struct hand *hand2){
    // declaring arrays to hold the suits and faces of each hand (like the professor asked) initializing them as 0's
    int suitsInHand1[4] = {0,0,0,0};
    int facesInHand1[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};
    int suitsInHand2[4] = {0,0,0,0};
    int facesInHand2[13] = {0,0,0,0,0,0,0,0,0,0,0,0,0};

    // fill the arrays with the numbers from the hands (similar to what we did to print the cards)
    for(int i = 0; i < 5; i++){
        facesInHand1[hand1->cards[i].face]++;
        suitsInHand1[hand1->cards[i].suit]++;
        facesInHand2[hand2->cards[i].face]++;
        suitsInHand2[hand2->cards[i].suit]++;
    }

    // here is where it gets fun, it is basically the same code as the assignment, i just separated into functions :)
    // i will include the comments in the function but it returns 0, 1 or 2 so i stored them in variables for each hand 

    // ------ flush
    int h1Flush = flush(suitsInHand1);
    int h2Flush = flush(suitsInHand2);
    // ------ straight
    int h1Straight = straight(facesInHand1);
    int h2Straight = straight(facesInHand2);

    // this here was all one function but then it would have worked out because i would have to return multiple things so i splited them up
    // maybe i could have used an struct but idk it looks pretty (at least i think so)
    // ------ four of Kind
    int h1Four = fourOfKind(facesInHand1);
    int h2Four = fourOfKind(facesInHand2);
    // ------ three of kind
    int h1Three = threeOfKind(facesInHand1);
    int h2Three = threeOfKind(facesInHand2);
    // ------ pairs (one or two or zero)
    int h1Pairs = pairs(facesInHand1);
    int h2Pairs = pairs(facesInHand2);

    // then we pass all those variables to the getRanking function which will return the score
    int h1Rank = getRanking(h1Straight, h1Flush, h1Four, h1Three, h1Pairs);
    int h2Rank = getRanking(h2Straight, h2Flush, h2Four, h2Three, h2Pairs);

    // then once we have the ranking, we print what each user has by using the same idea as the printHands function
    // it gets the string that matches the rank (0 to 8)
    printf("Player one has a %s.\n", ranksInString[h1Rank]);
    printf("Player two has a %s.\n", ranksInString[h2Rank]);

    // then we check who won and print it out again
    checkWinner(h1Rank, h2Rank);
}

// check for flush – 5 cards of the same suit - returns 0 or 1
int flush(int suits[]){
    for(int i=0; i<5; i++){
        if(suits[i] == 5)
            return 1;
        else
            return 0;
    }
}

// check for straight – eg. One each of 5,6,7,8,9 - returns 0 or 1

int straight(int faces[]){
    // locate the first card
    int i = 0, consecutive = 0;
	while (faces[i] == 0)
		i++;
	
    // count the consecutive non-zero faces
	for (; i < 3 && faces[i]; i++)
		consecutive++;
	if (consecutive == 5)
        return 1;
    else
        return 0;
}

// check for 4-of-a-kind, returns 0 or 1
int fourOfKind(int faces[]){
    for (int i = 0; i < 14; i++) {
		if (faces[i] == 4)
            return 1;
        else
            return 0;
	}
}

// check for 3-of-a-kind, returns 0 or 1
int threeOfKind(int faces[]){
    for (int i = 0; i < 14; i++) {
		if (faces[i] == 3)
            return 1;
        else
            return 0;
	}
}

// check for 3-of-a-kind, returns 0, 1 or 2
int pairs(int faces[]){
    int pair = 0;
    for (int i = 0; i < 14; i++) {
		if (faces[i] == 2)
			pair++;
	}
    return pair;
}

// receives variables and returns the ranking from 0 to 8 (because the ranksInStrings starts with index 0)
// follows the rules of poker 
int getRanking(int straight, int flush, int four, int three, int pairs){
    if (straight && flush)
		return 8; // straight flush (that one is hard lol)
	else if (four)
		return 7; // four of kind
	else if (three && pairs == 1)
		return 6; // full house
	else if (flush)
		return 5; // flush
	else if (straight)
		return 4; // straight
	else if (three)
		return 3; // three of kind
	else if (pairs == 2)
		return 2; // two pairs
	else if (pairs == 1)
		return 1; // one pair
	else
		return 0; // high card
}

// receives two ranking, compares which ones is bigger and prints out accordingly
int checkWinner(int rank1, int rank2){
    // if player one's rank is bigger then he/she won
    if(rank1>rank2)
        printf("Player one wins, congrats!!\n");
    // if player two's rank is bigger then he/she won
    else if(rank2>rank1)
        printf("Player two wins, congrats!!\n");
    // or if it is the same then it's a tie
    else
        printf("The two players tied!\n");
}

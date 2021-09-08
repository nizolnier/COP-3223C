/* Nicole Zolnier
Fun functions with strings!
8/02/21  
COP 3223 */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int equal(char *w1, char *w2);
void to_upper(char *word);
int length(char *word);
void reverse(char *word);
int palindrome(char *word);

int main() {

  char test1[30], test2[30], test3[30];
  // get two input strings
  printf("Enter a string.\n");
  scanf("%s", test1);

  printf("Enter another string.\n");
  scanf("%s", test2);

  printf("Enter the last string (I promise!).\n");
  scanf("%s", test3);

  if(palindrome(test3) == 1){
      printf("%s is a palindrome.\n", test3);
  } else {
      printf("%s is not a palindrome.\n", test3);
  }

  // test the equal function
  if (equal(test1, test2))
    printf("You entered two equal strings.\n");
  else
    printf("Your strings are different.\n");

  // now the upper case function
  to_upper(test1);
  printf("Your first string is now upper case: %s\n", test1);

  // and length
  printf("The length of your second string is %d\n", length(test2));

  // finally reverse!
  reverse(test2);
  printf("Your second string reversed is %s\n", test2);

  return 0;
}

// returns 1 iff the strings pointed to by w1 and w2 are identical
// returns 0 otherwise
int equal(char *w1, char *w2) {

  int i=0;

  // keeps on going
  while (1) {

    // characters don't match, not equal!
    if (w1[i] != w2[i])
      return 0;

    // if we match the null character, the strings are equal!!!
    else if (w1[i] == '\0')
      return 1;

    i++;
  }
}

// changes the string pointed to by word to be upper case
void to_upper(char *word) {

  int i=0;

  // go through each character one by one, changing it to upper case
  while (word[i] != '\0') {
    word[i] = toupper(word[i]);
    i++;
  }
}

// returns the length of the string pointed to by word
int length(char *word) {

  int i=0;

  // keep on counting until the null character
  while (word[i] != '\0')
    i++;
  return i;
}

// reverses the contents of the string pointed to by word
void reverse(char *word) {

  int i, len;
  char temp;

  // get the length of the word
  len = length(word);

  // go half-way through
  for (i=0; i<len/2; i++) {

    // swap "opposite" side letters!
    temp = word[i];
    word[i] = word[len-1-i];
    word[len-1-i] = temp;
  }
}

int palindrome(char *word) {

  int len, index;
  index = 0;
  len = strlen(word);

  while (word[index] == word[len-1-index] &&
         index < len/2)
    index++;

  if (index == len/2)
    return 1;

  return 0;
}


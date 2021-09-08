/* Nicole Zolnier
A short example to illustrate the use of structs.
8/04/21  
COP 3223 */

#include <stdio.h>
#include <string.h>

struct block {
  int number;
  char letter;
  char color[15];
};

void setup(struct block *b);
void print_block(struct block b);
int equal(struct block a, struct block b);

#define SIZE	3

int main() {
  int i, j;
  struct block my_set[SIZE];

  // initialize all blocks
  for (i=0; i<SIZE; i++) {
    setup(&my_set[i]);
  }

  // see if any pair are equal
  for (i=0; i<SIZE; i++) {
    for (j=i+1; j<SIZE; j++) {
      if (equal(my_set[i],my_set[j]))
        printf("Blocks %d and %d are identical.\n",i,j); 
    }
  }

  for (i=0;i<SIZE; i++)
    print_block(my_set[i]);
}

// post-condition: b will be initialized with information entered by the user
void setup(struct block *b) {

  printf("Enter number, letter & color\n");
  scanf("%d %c %s", &(b->number), &(b->letter), &(b->color));

}

// post-condition: b's components will be printed out
void print_block(struct block b) {
  printf("%d %c %s\n", b.number, b.letter, b.color);
}

// post-condition: Will return 1 if each corresponding component of blocks a and b are equal, 0 otherwise
int equal(struct block a, struct block b) {

  if (a.number == b.number && a.letter  == b.letter && 
      !strcmp(a.color, b.color))
    return 1;
  else
    return 0;
}

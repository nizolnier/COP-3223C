/* Nicole Zolnier
Show the use of the strcat function
8/02/21  
COP 3223 */

#include <stdio.h>
#include <string.h>

int main() {

  char first[30], last[30];
  char *wholename;

  // read in the first and last name of the user
  printf("Enter your first name.\n");
  scanf("%s", first);
  printf("Enter your last name.\n");
  scanf("%s", last);

  // concatenate these and store the answer into wholename
  wholename = (char *)strcat(first, last);

  // print out the results
  printf("first is now %s.\n", first);
  printf("last is now %s.\n", last);
  printf("wholename is now %s.\n", wholename);

  // make a single change to wholename
  wholename[0] = 'X';

  printf("\nHere are the changes made:\n");
  printf("first is now %s.\n", first);
  printf("last is now %s.\n", last);
  printf("wholename is now %s.\n", wholename);

  return 0;
}

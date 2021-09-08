/* Nicole Zolnier
Illustrate the use of the four string functions
8/02/21  
COP 3223 */

#include <stdio.h>
#include <string.h>

int main() {


  char first[30], last[30];
  char wholename[60];

  // read in first and last names
  printf("Enter your first name.\n");
  scanf("%s", first);
  printf("Enter your last name.\n");
  scanf("%s", last);

  // prints out which one comes first alphabetically
  if (strcmp(first, last) < 0)
    printf("Your first name comes first alphabetically.\n");
  else if (strcmp(first, last) == 0)
    printf("You're weird.\n");
  else
    printf("Your last name comes first alphabetically.\n");

  // show the contents of first and last now
  printf("first = %s, last = %s\n", first, last);
  
  // concatenate last into first
  strcat(first, last);

  // now we can see how first changed
  printf("first = %s, last = %s\n", first, last);

  // make a true copy of the string first into wholename
  strcpy(wholename, first);

  // now we can see that change
  printf("first = %s, wholename = %s\n", first, wholename);

  // use the strlen function
  printf("Your whole name is %d characters.\n", strlen(wholename));
  
  return 0;
}

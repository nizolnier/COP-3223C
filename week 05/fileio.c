/* Nicole Zolnier
File Input Output Example
6/22/21  
COP 3223 */

#include <stdio.h>

int main() {

  FILE *ifp;
  int num = -1, sum = 0;

  ifp = fopen("input.txt", "r");

  while (num != 0) {
    fscanf(ifp, "%d", &num);
    sum += num;
  }

  fclose(ifp);

  printf("The sum is %d\n", sum);

  return 0;
}

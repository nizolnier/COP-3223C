/* Nicole Zolnier
Pascal triangle to demonstrate a 2D array
6/28/21  
COP 3223 */

#include <stdio.h>

int main() {
  int pascaltri[11][11];
  int i,j;

  // initialize the beginning and end of each row
  for (i=0; i<11; i++) {
    pascaltri[i][0] = 1;
    pascaltri[i][i] = 1;
  }

  // fill in triangle, using the pascal triangle identity
  for (i=2; i<11; i++)
    for (j=1; j<i; j++)
      pascaltri[i][j] = pascaltri[i-1][j-1]+pascaltri[i-1][j];

  // print out chart
  for (i=0; i<11; i++) {
    for (j=0; j<=i; j++) 
        printf("%4d ", pascaltri[i][j]);
    printf("\n");
  }

  return 0;
}

/* Nicole Zolnier
Reads from the input file cookie.txt and writes the bar graph output to a file called cookiegraph.txt
6/22/21  
COP 3223 */

#include <stdio.h>

int main() {

  FILE *ifp, *ofp;
  int numgirls, index, numboxes, stars;
  char name[20];

  ifp = fopen("cookie.txt","r");
  ofp = fopen("cookiegraph.txt", "w");

  fscanf(ifp, "%d", &numgirls);
  fprintf(ofp, "%d\n", numgirls);

  for (index=0; index<numgirls; index++) {

    fscanf(ifp, "%s", &name);
    fprintf(ofp, "%s\t", name);
    fscanf(ifp, "%d", &numboxes);

    for (stars=0; stars<numboxes; stars++)
      fprintf(ofp,"*");

    fprintf(ofp, "\n");
  }

  fclose(ifp);
  fclose(ofp);
  return 0;
}

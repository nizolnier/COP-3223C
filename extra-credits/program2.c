/* Nicole Zolnier (and Professor Hensel too) - 7/16/21
Read a file with numbers and print it in reverse with DMA
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    // declaring pointer which will become the array, size, index and file pointer
    int *p, size, i;
    FILE *fp;
    // open the input file in read mode 
    fp = fopen("input.txt", "r");

    // read the first number of the file which determines how many numbers are in the file (aka array)
    fscanf(fp, "%d", &size);

    // make memory with malloc and the amount of bytes is the size of the array
    p = (int *)malloc(size * sizeof(int));

    // loop the document to scan each number and save it to an element of the array
    for (i = 0; i < size; i++)
        fscanf(fp, "%d", &p[i]);

    // print out the array elements backwards
    // the index starts at 9 which is the last element of the array and then it goes down to zero
    for (i = size - 1; i >= 0; i--)
        printf("%d\n", p[i]);

    // close the file and free memory
    free(p); // we FREE the memory pointed to by p
    fclose(fp);

    // and that's a wrap!
    return 0;
}
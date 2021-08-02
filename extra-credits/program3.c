#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p = NULL;
    int count = 1;
    int temp, i;
    FILE *fp;

    fp = fopen("input.txt", "r");

    while (fscanf(fp, "%d", &temp) != EOF) {
        if (p == NULL)
        {
            p = malloc(sizeof(temp) * sizeof(int));
            *p = temp;
        }
        else {
            count++;
            p = realloc(p, sizeof(p) * count);
            i = count - 1;
            *(p + i) = temp;
        }
    }

    for (i = *p; i >= 0; i--)
        printf("%d\n", p[i]);

    free(p);
    fclose(fp);
    return 0;
}
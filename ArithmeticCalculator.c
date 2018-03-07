#include <stdio.h>
#include <stdlib.h>

int main()
{
    int firstTerm, lastTerm, commonDifference, numberofTerms, sum;

    printf("Insert the First Term\n");
    scanf("%d", &firstTerm);
        printf("\n");
    printf("Insert the Last Term\n");
    scanf("%d", &lastTerm);
        printf("\n");
    printf("Insert the Common Difference\n");
    scanf("%d", commonDifference);
        printf("\n");

    numberofTerms = (-firstTerm + commonDifference + lastTerm) / commonDifference;

    sum = (firstTerm + lastTerm) * numberofTerms / 2;

    printf("The sum of the terms of this arithmetic sequence is:\n%d\n", sum);

    return 0;
}

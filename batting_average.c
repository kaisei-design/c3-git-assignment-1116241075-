#include <stdio.h>

int main(void)
{
    int at_bats;
    int hits;
    double average;

    printf("Enter at-bats: ");
    scanf("%d", &at_bats);

    printf("Enter hits: ");
    scanf("%d", &hits);

    average = (double)hits / at_bats;

    printf("Batting average: %.3f\n", average);

    return 0;
}

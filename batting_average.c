#include <stdio.h>

int main(void)
{
    int at_bats;
    int hits;
    double average;

    printf("Enter at-bats: ");
    if (scanf("%d", &at_bats) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter hits: ");
    if (scanf("%d", &hits) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    if (at_bats <= 0 || hits < 0 || hits > at_bats) {
        printf("Invalid baseball record.\n");
        return 1;
    }

    average = (double)hits / at_bats;

    printf("Batting average: %.3f\n", average);

    return 0;
}

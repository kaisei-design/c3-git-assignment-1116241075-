#include <stdio.h>

const char *evaluate_average(double average)
{
    if (average >= 0.300) {
        return "Excellent";
    }
    if (average >= 0.250) {
        return "Good";
    }
    return "Keep practicing";
}

int main(void)
{
    char player[50];
    int at_bats;
    int hits;
    double average;

    printf("Enter player name: ");
    if (scanf("%49s", player) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

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

    printf("%s's batting average: %.3f\n", player, average);
    printf("Evaluation: %s\n", evaluate_average(average));

    return 0;
}

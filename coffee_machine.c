#include<stdio.h>

int main()
{
    char coffeetype, cupsize;
    float totaltime = 0;

    // User Input for Coffee Type
    printf("Which Type of Coffee do you want?\n");
    printf("1. B = Black Coffee\n2. W = White Coffee\n");
    scanf(" %c", &coffeetype);

    // User Input for Cup Size
    printf("Manual or Double Cup size?\n");
    printf("1. M = Manual Cup\n2. D = Double Cup\n");
    scanf(" %c", &cupsize);

    // For Black Coffee
    if (coffeetype == 'B' || coffeetype == 'b') {
        if (cupsize == 'M' || cupsize == 'm') {
            printf("\nOPERATIONS  |   TIME\n");
            printf("Put Water     |  20 mins\n");
            printf("Sugar         |  20 mins\n");
            printf("Mix Well      |  25 mins\n");
            printf("Add Coffee    |  15 mins\n");
            printf("Add Milk      |     -\n");
            printf("Mix Well      |  25 mins\n");
            totaltime = 20 + 20 + 25 + 15 + 0 + 25;
            printf("\nCoffee Type: Black Coffee\nCup Size: Manual\nTotal Time: %.2f mins\n", totaltime);
        }
        else if (cupsize == 'D' || cupsize == 'd') {
            printf("\nOPERATIONS  |   TIME\n");
            printf("Put Water     |  30 mins\n");
            printf("Sugar         |  30 mins\n");
            printf("Mix Well      |  37.5 mins\n");
            printf("Add Coffee    |  22.5 mins\n");
            printf("Add Milk      |     -\n");
            printf("Mix Well      |  37.5 mins\n");
            totaltime = 30 * 1.5 + 30 * 1.5 + 37.5 * 1.5 + 22.5 * 1.5 + 0 + 37.5 * 1.5;
            printf("\nCoffee Type: Black Coffee\nCup Size: Double\nTotal Time: %.2f mins\n", totaltime);
        }
    }
    // For White Coffee
    else if (coffeetype == 'W' || coffeetype == 'w') {
        if (cupsize == 'M' || cupsize == 'm') {
            printf("\nOPERATIONS  |   TIME\n");
            printf("Put Water     |  15 mins\n");
            printf("Sugar         |  15 mins\n");
            printf("Mix Well      |  20 mins\n");
            printf("Add Coffee    |  2 mins\n");
            printf("Add Milk      |  4 mins\n");
            printf("Mix Well      |  20 mins\n");
            totaltime = 15 + 15 + 20 + 2 + 4 + 20;
            printf("\nCoffee Type: White Coffee\nCup Size: Manual\nTotal Time: %.2f mins\n", totaltime);
        }
        else if (cupsize == 'D' || cupsize == 'd') {
            printf("\nOPERATIONS  |   TIME\n");
            printf("Put Water     |  22.5 mins\n");
            printf("Sugar         |  22.5 mins\n");
            printf("Mix Well      |  30 mins\n");
            printf("Add Coffee    |  3 mins\n");
            printf("Add Milk      |  6 mins\n");
            printf("Mix Well      |  30 mins\n");
            totaltime = 22.5 * 1.5 + 22.5 * 1.5 + 30 * 1.5 + 3 * 1.5 + 6 * 1.5 + 30 * 1.5;
            printf("\nCoffee Type: White Coffee\nCup Size: Double\nTotal Time: %.2f mins\n", totaltime);
        }
    } else {
        printf("Invalid input for coffee type.\n");
    }

    return 0;
}

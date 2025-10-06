#include <stdio.h>
int main()
 {
    int stick = 21, player, computer;

    printf("Starting the matchstick game\n");
    printf("Rules: Pick 1, 2, 3, or 4 matchsticks on each turn. Whoever picks the last matchstick will lose.\n\n");

    while (stick > 1) {
        printf("Matchsticks left: %d\n", stick);
        printf("Pick 1, 2, 3, or 4 : ");
        scanf("%d", &player);

        if (player < 1 || player> 4)
            {
            printf("Wrong count. Pick between 1 to 4.\n");
        }

        stick = stick - player;

        if (stick == 1)
        {
            printf("Last Matchstick picked. You lose :D \n");
        }

        computer= 5 - player;
        printf("Computer picks %d matchstick.\n", computer);

       stick = stick - computer;

        if (stick == 1)
            {
            printf("Forced to pick the last one. You lose :D\n");
        }
    }
    return 0;
}


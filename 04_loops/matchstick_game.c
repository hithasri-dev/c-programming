// Matchstick Game
#include <stdio.h>
int main()
{
    int user, computer;
    int total = 21;

    while (total > 1)
    {
        printf("matchsticks left:%d\n", total);

        printf("pick 1 to 4 matchsticks:");
        scanf("%d", &user);
        if (user < 1 || user > 4)
        {
            printf("Invalid Choice!\n");
            continue;
        }

        computer = 5 - user;

        printf("computer picks %d matchsticks\n", computer);

        total = total - user - computer;
    }

    printf("\nOnly one matchstick left.\n");
    printf("You have to pick it.\n");
    printf("Computer Wins!\n");

    return 0;
}
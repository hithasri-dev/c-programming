#include <stdio.h>

int main()
{
    int class, failed, grace;

    printf("Enter class obtained (1/2/3): ");
    scanf("%d", &class);

    printf("Enter number of subjects failed: ");
    scanf("%d", &failed);

    switch(class)
    {
        case 1:
            if(failed > 3)
                grace = 0;
            else
                grace = failed * 5;
            break;

        case 2:
            if(failed > 2)
                grace = 0;
            else
                grace = failed * 4;
            break;

        case 3:
            if(failed > 1)
                grace = 0;
            else
                grace = failed * 5;
            break;

        default:
            printf("Invalid class");
            return 0;
    }

    printf("Grace marks = %d", grace);

    return 0;
}

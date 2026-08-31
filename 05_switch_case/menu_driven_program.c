#include <stdio.h>

int main()
{
    int choice, num, i;
    int fact, count;

    do
    {
        printf("\n\n----- MENU -----\n");
        printf("1. Factorial of a number\n");
        printf("2. Prime or not\n");
        printf("3. Odd or even\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter a number: ");
                scanf("%d", &num);

                fact = 1;

                for(i = 1; i <= num; i++)
                {
                    fact = fact * i;
                }

                printf("Factorial = %d", fact);
                break;

            case 2:
                printf("Enter a number: ");
                scanf("%d", &num);

                count = 0;

                for(i = 1; i <= num; i++)
                {
                    if(num % i == 0)
                        count++;
                }

                if(count == 2)
                    printf("Prime number");
                else
                    printf("Not a prime number");

                break;

            case 3:
                printf("Enter a number: ");
                scanf("%d", &num);

                if(num % 2 == 0)
                    printf("Even number");
                else
                    printf("Odd number");

                break;

            case 4:
                printf("Exiting program...");
                break;

            default:
                printf("Invalid choice");

        }

    } while(choice != 4);

    return 0;
}

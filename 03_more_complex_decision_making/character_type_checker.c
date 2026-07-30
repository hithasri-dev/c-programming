//Check whether a character is capital, small, digit or special symbol
#include<stdio.h>
int main()
{
    char ch;
    printf("enter character:");
    scanf("%c",&ch);

    if (ch >= 'A' && ch <= 'Z')
        printf("Capital Letter");
    else if (ch >= 'a' && ch <= 'z')
        printf("Small Letter");
    else if (ch >= '0' && ch <= '9')
        printf("Digit");
    else
        printf("Special Symbol");

    return 0;

}
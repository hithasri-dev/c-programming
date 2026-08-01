//Check lowercase using Conditional Operator
#include <stdio.h>

int main()
{
    char ch;

    printf("Enter character: ");
    scanf(" %c", &ch);

    (ch >= 'a' && ch <= 'z') ?
    printf("Lowercase Alphabet") :
    printf("Not Lowercase");

    return 0;
}

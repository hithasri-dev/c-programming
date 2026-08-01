#include <stdio.h>

int main()
{
    int red, green, blue;
    float white, cyan, magenta, yellow, black;

    printf("Enter Red, Green and Blue values (0-255): ");
    scanf("%d %d %d", &red, &green, &blue);

    if (red == 0 && green == 0 && blue == 0)
    {
        cyan = 0;
        magenta = 0;
        yellow = 0;
        black = 1;
    }
    else
    {
        float r, g, b;

        r = red / 255.0;
        g = green / 255.0;
        b = blue / 255.0;

        /* Find White (Maximum of r, g, b) */
        if (r >= g && r >= b)
            white = r;
        else if (g >= r && g >= b)
            white = g;
        else
            white = b;

        cyan = (white - r) / white;
        magenta = (white - g) / white;
        yellow = (white - b) / white;
        black = 1 - white;
    }

    printf("\nCMYK Values:\n");
    printf("Cyan = %.2f\n", cyan);
    printf("Magenta = %.2f\n", magenta);
    printf("Yellow = %.2f\n", yellow);
    printf("Black = %.2f\n", black);

    return 0;
}

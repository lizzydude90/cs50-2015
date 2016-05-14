/**
* water.c
* 
* Lizzie Eng
*
* CONDITIONS 
* (1) Input (minutes) must be a positive integers
* (2) If Input = positive int, output must reflect input in bottles of water
* (3) Else prompt user to "Retry"
*/

#include <stdio.h>
#include <cs50.h>

int GetPositiveInt();

int main(void)
{
    int b = 16; // bottles of water
    int w = 1.5 * 128; // water in ounces
    int n = GetPositiveInt();
    printf("bottles: %i\n", n * w / b);
}

// gets a positive integer from the user
int GetPositiveInt(void)
{
    int n;
    do
    {
        printf("minutes: ");
        n = GetInt();
    }
    while (n <= 0);
    return n./;
}

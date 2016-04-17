/** 
 * mario.c
 * 
 * Lizzie Eng
 * 
 * Generate half pyramids not greater than 23!
 * 
 * (1) Prompt the user for a height
 * (2) Height must be a positive integer and less than 23
 */

#include <stdio.h>
#include <cs50.h>


int main (void)
{
    int h; //height of the pyramid
    do 
    {
        printf ("Height: "); 
        h = GetInt();  
    }
    while (h > 23 || h < 0 );
    
    for (int i = 0; i < h; i++) //print a # every count
    {
        for (int j = 0; j < i; j++) // prints additional # per count
        {
            printf ("#");
        }
       printf ("#\n");
    }
    return 0;
}

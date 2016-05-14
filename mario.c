/** 
 * mario.c
 * 
 * Lizzie Eng
 * 
 * Generate 2x half pyramids not greater than 23!
 * 
 */

#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;
    
    do
    {
        printf("Height: ");
        h = GetInt();  //prompts users for height
    }
    while (h > 23 || h < 0);
    
    for (int i = 0; i < h; i++) //prints base hashes, this code gets executed first
    {
            for (int j = 0; j < h-i-1; j++) // prints spaces in between
        {
            printf (" ");
        }
             for (int k = 0; k < i; k++) // prints secondary hashes
        {
            printf ("#"); 
        }
        printf("##\n"); 
    }
    return 0;
}

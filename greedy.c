/** greedy.c
 * 
 * Lizzie Eng
 * 
 * Returns the user the smallest number of change possible based on input
 * 
 */

#include <stdio.h>
#include <cs50.h>
#include <math.h>

// Define global variables to be used 

int quarters = 25;
int dimes = 10;
int nickels = 5;
int pennies = 1;
int i, output;
float x;

int main(void)
{
    do { // get user input first
        printf("How much change is owed?\n");
        x = GetFloat();
        i = (int) roundf(x * 100); //rounding integer value due to floating point imprecision
    } while (x < 0); 

// Greedy algorithm begins, take remainder and keep dividing accordingly

int x1 = i % quarters;
int x2 = (i % quarters) % dimes;
int x3 = ((i % quarters) % dimes) % nickels;

if ( x1 != 0 ) {
    output = (i / quarters) + (x1 / dimes); 
    if ( x2 != 0) {
        output = (i / quarters) + (x1 / dimes) + (x2 / nickels);
        if ( x3 != 0) {
            output = (i / quarters) + (x1 / dimes) + (x2 / nickels) + (x3 / pennies);
        }
    }
} else {
   output = i / quarters;
}

printf("%i\n", output);

}

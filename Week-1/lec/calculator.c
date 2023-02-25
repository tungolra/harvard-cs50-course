#include <cs50.h>
#include <stdio.h>

// int main (void) 
// { 
//     long x = get_long("x: "); 
//     long y = get_long("y: ");

//     printf("%li\n", x + y);
// }
// integer overflow: when you add two numbers that are too big for an int to hold
// once you reach the max value of an int, it will start over at the min value or become negative

// int main (void) 
// { 
//     long x = get_long("x: "); 
//     long y = get_long("y: ");

//     float z = (float) x / (float) y;

//     printf("%f\n", z);
// }
// type casting: changing the type of a variable


int main (void) 
{ 
    long x = get_long("x: "); 
    long y = get_long("y: ");

    // float z = (float) x / (float) y;
    // printf("%.20f\n", z); // prints: 0.33333334326744079590

    double z = (double) x / (double) y;
    printf("%.20f\n", z); // prints: 0.33333333333333331483 slightly more precise

}
// floating-point imprecision: when you divide two numbers that are too big for an int to hold

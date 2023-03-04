#include <cs50.h>
#include <stdio.h>


int main (void)
{
    // get length from user input
    int length;
    do
    {
    length = get_int("Length: ");
    }
    while (length < 1);
    // set the first value
    int twice[length];

    twice[0] = 1;
    for (int i = 1; i < length + 1; i++)
    {
        twice[i] = 2 * twice[i-1];
        printf("%i\n", twice[i]);
    }
}
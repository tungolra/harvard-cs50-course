#include <cs50.h>
#include <stdio.h>


int collatz(int n);

int main(void)
{
    int n = get_int("Enter number: ");
    printf("%i\n", collatz(n));
}

int steps = 0;

int collatz(int n)
{
    if (n == 1)
    {
        return steps;
    }

    if (n % 2 == 0)
    {
        steps++;
        return collatz(n/2);
    }
    else if (n % 2 == 1)
    {
        steps++;
        return collatz(n * 3 + 1);
    }
    return steps;
}
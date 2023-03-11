#include <cs50.h>
#include <stdio.h>

int factorial(int n);

int main(void){
    int n = get_int("Enter a number: ");

    printf("%i \n", factorial(n));
}

int factorial(int n)
{
    if (n == 1)
    {
        return n;
    }

    return factorial(n-1) * n;

}
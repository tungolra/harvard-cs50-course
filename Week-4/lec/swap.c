#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b);

int main(void)
{
    int x = 1;
    int y = 2;

    printf("x is %i, y is %i\n", x, y);
    swap(&x, &y); // get address of x, y
    printf("x is %i, y is %i\n", x, y);

}

// void swap(int a, int b)
void swap(int *a, int *b)
{
    // bug due to being copies; can't swap things by value which are held at different memory addresses
    // int tmp = a;
    // a = b;
    // b = tmp;

    // have to handle values at their memory addresses
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
#include <stdio.h>
#include <cs50.h>

int get_size(void);
void print_grid(int n);

int main (void)
{ 
    int n = get_size();
    print_grid(n);
}

int get_size(void)
{
    // get size of grid
    int n;
 // do while loop to avoid repeating get_int("Size: ")
    do 
    {
        n = get_int("Size: ");
    }

    while (n < 1) ;

    return n;
// print grid of bricks

}

void print_grid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
            printf("\n");
    }
}
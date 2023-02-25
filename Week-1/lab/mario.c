#include <cs50.h>
#include <stdio.h>

int get_size(void);
void print_grid(int n);

int main(void)
{
    int n;
    // set n to user input
    n = get_size();
    // print grid
    print_grid(n);

}

int get_size(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    // prompt user input if height is less than 1 or greater than 8
    while (n < 1 || n > 8);
    return n;
}

void print_grid(int n)
{
    // print rows; increment i to determine num of spaces / hashes to print on each row
    for (int i = 1; i <= n; i++)
    {
        // for each row, set j to n - i and print spaces until j = 0
        for (int j = n - i; j > 0; j--)
        {

            printf(" ");
        }
        // for each row, base the number of #'s printed on size of i
        // increment k until it equals i
        for (int k = 1; k <= i; k++)
        {

            printf("#");
        }
        // then add a new line
        printf("\n");
    }
}


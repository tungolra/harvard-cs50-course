// Lab 1: Population Growth

// Say we have a population of n llamas. Each year, n / 3 new llamas are born, and n / 4 llamas pass away.

// For example, if we were to start with n = 1200 llamas, then in the first year, 1200 / 3 = 400 new llamas would be born and 1200 / 4 = 300 llamas would pass away. At the end of that year, we would have 1200 + 400 - 300 = 1300 llamas.

// To try another example, if we were to start with n = 1000 llamas, at the end of the year, we would have 1000 / 3 = 333.33 new llamas. We can’t have a decimal portion of a llama, though, so we’ll truncate the decimal to get 333 new llamas born. 1000 / 4 = 250 llamas will pass away, so we’ll end up with a total of 1000 + 333 - 250 = 1083 llamas at the end of the year.
#include <cs50.h>
#include <stdio.h>

int get_start(void);
int get_end(int start);
int get_threshold(int x, int y);

int main(void)
{
    int start = get_start();
    int end = get_end(start);
    int threshold = get_threshold(start, end);

    // Print number of years
    printf("Years: %i\n", threshold);
}

int get_start(void)
{
    // prompt user to enter starting population
    int x;
    do
    {
        x = get_int("Start size: ");
    }
    while (x < 9);
    return x;
}
int get_end(int x)
{
    // prompt user to enter threshold
    int y;
    do
    {
        y = get_int("End size: ");
    }
    while (y < x);
    return y;
}

int get_threshold(int start, int end)
{
    // calculate threshold based on start and end inputs
    int counter = 0;
    while (start < end)
    {
        counter ++;
        start = start + (start / 3) - (start / 4);
    }
    return counter;
}
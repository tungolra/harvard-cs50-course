#include <cs50.h>
#include <stdio.h>
#include <string.h>

// int main(void)
// {
//     int numbers[] = { 20, 10, 40, 5, 600, 40, 1};

//     int n = get_int("Number: ");

//     for (int i = 0; i < 7; i++)
//     {
//         if (numbers[i] == n)
//         {
//             printf("Found\n");
//             return 0;
//         }
//     }
//     printf("Not found\n");
//     return 1;
// }
int main(void)
{
    string strings[] = {"hu", "hr", "hui", "he", "ho", "hea", "ga"};

    string s = get_string("String: ");

    for (int i = 0; i < 7; i++)
    {
        // need string-compare to compare strings
        if (strcmp(strings[i], s) == 0)
        {
            printf("Found\n");
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
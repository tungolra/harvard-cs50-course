#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


// int main(void)
// {
//     int i = get_int("i: ");
//     int j = get_int("j: ");

//     if (i == j)
//     {
//         printf("Same\n");
//     }
//     else
//     {
//         printf("Different\n");
//     }
// }
int main(void)
{
    char *s = get_string("s: ");
    char *t = get_string("t: ");

    // if (s == t)
    if (strcmp(s, t) == 0) // strcmp goes to the memory address and starts comparing values held in each address for each variable
    // same as *(s) == *(t), *(s + 1) == *(t + 1)...etc
    {
        printf("Same\n");
    }
    else
    {
        printf("Different\n"); // (s == t) prints even if same input bc they are held in diff memory addresses
    }
}


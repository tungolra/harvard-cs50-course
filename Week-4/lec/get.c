#include <stdio.h>

// int main(void)
// {
//     int x;
//     printf("x: ");
//     scanf("%i", &x);
//     printf("x: %i\n", x);
// }

int main(void)
{
    // char *s == NULL;
    char s[4];
    printf("s: ");
    scanf("%s", s); // don't need & bc strings are always addresses
    printf("s: %s\n", s); // returns 0 for any string because no memory has been allocated
}
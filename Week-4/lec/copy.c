#include <stdio.h>
#include <stdlib.h> // holds malloc and free methods
#include <cs50.h>
#include <string.h>
#include <ctype.h>


// int main(void)
// {
//     char *s = get_string("s: ");
//     char *t = s;

       // changes both var s and t
//     if (strlen(t) > 0)
//     {
//         t[0] = toupper(t[0]);
//     }

//     printf("s: %s\n", s);
//     printf("t: %s\n", t);
// }
int main(void)
{
    char *s = get_string("s: ");
    if (s == NULL) // best to include in practice
    {
        return 1;
    }

    char *t = malloc(strlen(s) + 1); // points to random chunk of free space
    if (t == NULL)
    {
        return 1;
    }
    // copy s into t
    // could also use strcpy(a, b)
    for (int i = 0, len = strlen(s) + 1; i < len; i++) // + 1 to include the null character
    {
        t[i] = s[i];
    }

    // only change value of t[0]
    if (strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    // whenever you allocate memory with malloc, free it when you're done with it!
    free(t);
    
    return 0;
}
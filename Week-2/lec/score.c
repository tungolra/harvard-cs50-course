#include <stdio.h>
#include <cs50.h>

// int main (void)
// { 
//     char c1 = 'H';
//     char c2 = 'I';
//     char c3 = '!';

//     printf("%c%c%c\n", c1, c2, c3);
// }

int main (void)
{
    string words[2];
    words[0] = "HI!";
    words[1] = "BYE!";

    printf("%s\n", words[0]);
    printf("%s\n", words[1]);
}


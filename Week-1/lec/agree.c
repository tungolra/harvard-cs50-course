#include <cs50.h>
#include <stdio.h>

int main(void)
{
    char c = get_char("Do you agree? (Y/N)\n");

    if (c == 'y' || c == 'Y') 
    { 
        printf("Agreed.\n");
    }
    else if (c == 'n' || c == 'N')
    {
        printf("Not agreed.\n");
    }
}

// double quotes for strings
// single quotes for characters
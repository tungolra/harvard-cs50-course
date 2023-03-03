#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
// argument count, array of strings
{
    if (argc !=2)
    {
        printf("missing command-line argument\n");
        return 1;
    }
    else
    {
        printf("hello, %s\n", argv[1]);
        return 0;
    }
}
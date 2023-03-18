#include <stdio.h>
#include <cs50.h>
// & before a variable yields address
// * <- dereference operator
// pointers: contains the address in memory of some value

// int main(void)
// {
//     int n = 50;
//     // printf("%p \n", &n); // i.e. => 0x7ffe8961a06c

//     int *p = &n; // store the address of a variable: it will be the address of int n
//     // the address where p is stored holds n as its value and takes up 8 bits in memory
//     // printf("%p \n", p); // i.e. => 0x7ffca77e521c


//     printf("%i \n", *p); // print what p is storing
// }

int main(void)
{
    // string type is cs50-specfic
    // char *s points to the string variable in C
    // typedef char *string; in the cs50 library
    // string s = "Hi!";
    // printf("%s \n", s);

    char *s = "Hi!";
    // printf("%p \n", s); // print out the address of s
    // printf("%p\n", s); // print out the address of s
    // printf("%p\n", &s[0]);
    // printf("%p\n", &s[1]);
    // printf("%p\n", &s[2]);
    // printf("%p\n", &s[3]); // outputs show memory addresses being consecutive
    
    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2)); // outputs the value at the memory address being pointed to

}
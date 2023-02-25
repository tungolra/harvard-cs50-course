#include <cs50.h>
#include <stdio.h> // include standard input output library

int main(void) { 
    string first = get_string("What is your first name?\n");
    string last = get_string("What is your last name?\n");
    printf("Hello, %s %s!\n", first, last);
}

// make hello to compile code
// ./hello to run program


    
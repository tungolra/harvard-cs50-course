#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

bool only_digits(string s);
int rotate(char c, int n);
int print_cipher(string text, int key);

int main(int argc, string argv[])
{
    // ensure user inputs 2 args and argv[1] is digit
    if (argc != 2 || !only_digits(argv[1]))
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }

    // convert key to an integer
    int key = atoi(argv[1]);
    string text = get_string("plaintext: ");

    // print ciphertext
    printf("ciphertext: ");
    print_cipher(text, key);
}

int print_cipher(string text, int key)
{
    for (int i = 0, len = strlen(text); i < len; i++)
    {
        // rotate if char is non-special character
        if (isalpha(text[i]))
        {
            printf("%c", rotate(text[i], key));
        }
        else
        {
            printf("%c", text[i]);
        }
    }
    printf("\n");
    return 0;
}

bool only_digits(string s)
{
    for (int i = 0, len = strlen(s); i < len; i ++)
    {
        if (!isdigit(s[i]))
        {
            return false;
        }
    }
    return true;
}
int rotate(char c, int n)
{
    // get ASCII value for given char
    int start = isupper(c) ? 'A' : 'a';
    int position = c - start;

    // rotate the position by the key; wrap around after reaching outer bound
    int rotated = (position + n) % 26;

    // store rotated char
    char result = (char)(start + rotated);

    return result;
}
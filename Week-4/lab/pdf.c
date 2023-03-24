#include <cs50.h>
#include <stdio.h>
#include <stdint.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Improper usage.\n");
        return 1;
    }

    //open file

    string filename = argv[1];

    // FILE is the type, input the variable; opens hi.txt, "r" = reading mode
    FILE *file = fopen(filename, "r");

    if (file == NULL)
    {
        printf("No such file found. \n");
        return 1;
    }

    // unint8_t is a special type (unsigned (only positive) integer; only "8" bits; _t - will be its own type) imported from stdint
    uint8_t buffer[4]; // used to store some data as we read it from the file
    uint8_t signature[] = {37, 80, 68, 70};

    // fread arguments: location to store blocks, size of block to read, how many to read, location to read from
    fread(buffer, 1, 4, file); // allows us to read the file


    // does the buffer signature match?
    for (int i = 0; i < 4; i++)
    {
        if (buffer[i] != signature[i])
        {
            printf("Likely not a PDF.\n");
            fclose(file);
            return 0;
        }
        printf("Likely a PDF!\n");
        fclose(file);
        return 0;
        // printf("%i\n", buffer[i]);
    }
}
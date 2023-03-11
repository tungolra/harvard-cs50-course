#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{

    // string names[] = {"Carter", "David"};
    // string numbers[] = {"+1-651-465-4544", "+1-946-465-4878"};
    person people[2];

    people[0].name = "Carter";
    people[0].number = "+1-651-465-4544";
    people[1].name = "David";
    people[1].number = "+1-946-465-4878";

    string name = get_string("Name: ");
    for (int i = 0; i < 2; i++)
    {
        // if (strcmp(names[i], name) == 0)
        if (strcmp(people[i].name, name) == 0)
        {
            printf("Found %s \n", people[i].number);
            return 0;
        }
    }
    printf("Not found\n");
    return 1;
}
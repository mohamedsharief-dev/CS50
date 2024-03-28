#include <stdio.h>
#include <cs50.h>
#include <string.h>


int main(void)
{
    string strings[] = {"batleship", "boot", "cannon", "iron", "thimble", "tophat"};
    string s = get_string("Search: ");

    for (int i = 0; i < 6; i++)
    {
        if (strcmp(strings[i], s) == 0)
        {
            printf("%s Found in the directory, \n", s);
            return 0;
        }
    }
    printf("Not Found");
    return 1; 
}
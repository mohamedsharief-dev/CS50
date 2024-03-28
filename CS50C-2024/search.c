#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
    int numbers[] = {1, 4, 5, 78, 9, 120, 20};
    int n = get_int("Search: ");


    for (int i = 0; i < n; i++)
    {
        if (numbers[i] == n)
        {
            printf("Found the Number %i in the Directory\n", n);
            return 0;
        }

    }
    printf("Not Found");
    return 1;
}
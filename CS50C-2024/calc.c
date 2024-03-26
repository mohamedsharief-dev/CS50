#include <stdio.h>
#include <cs50.h>

int add(int a, int b);

int main(void)
{
    int x = get_int("What's x ?; ");
    int y = get_int("What's y ?; ");

    printf("%i\n", add(x, y));

}

int add(int x, int y)
{
    return x + y; 
}
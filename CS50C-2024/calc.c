#include <stdio.h>
#include <cs50.h>


int main(void)
{
    float x = get_int("What's x ?; ");
    float y = get_int("What's y ?; ");

    printf("%f\n", x / y);

}


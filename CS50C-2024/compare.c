#include <stdio.h>
#include <cs50.h>

int main(void) {

int x = get_int("Whats x? ");
int y = get_int("What's y? ");

if (x > y) 
{
    printf("x is Greater than Y");
}
else if (x < y)
{
    printf("x is less than y");
}
else 
{
    printf(" x is eqaul to y");
}

    
}







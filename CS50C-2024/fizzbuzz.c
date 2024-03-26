#include <stdio.h>

int main(void)
{ 
    for (int i = 0; i < 50; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        printf("FIZZBUZZ\n");
        else if (i % 3 == 0)
        printf("FIZZ\n");
        else if (i % 5 == 0)
        printf("BUZZ\n");
        else 
        printf("%d \n",i);

        
        
    }
}
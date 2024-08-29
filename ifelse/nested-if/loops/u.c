#include <stdio.h>
int main()
{
 
    for (int i = 1; i <= 5; i++)// lines
    {
        for (int j = 5; j >= i; j--) //space
        {
            printf(" ");
        }
         for (int k = 1; k <=(2*i-1); k++)//to print*
            {
                printf("*");
            }

        printf("\n");
    }
}
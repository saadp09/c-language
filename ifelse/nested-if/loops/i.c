#include <stdio.h>
int main()
{
    int i = 1, n;

    printf(" enter the n =");
    scanf("%d", &n);

    do
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("%d , ", i);
        }
        i++;


    } 
    while (i <= n);
}

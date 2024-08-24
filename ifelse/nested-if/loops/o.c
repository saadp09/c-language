#include <stdio.h>
int main()
{
    int i = 1, f = 1, n;

    printf(" enter the n = ");
    scanf("%d", &n);

    do
    {
        f *= i;
        i++;
    } while (i <= n);

    printf("factorial is %d ", f);
}
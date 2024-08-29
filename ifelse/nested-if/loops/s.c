#include <stdio.h>
int main()
{
    char ch =  'A' ; 

    do
    {
        printf(" \n Ascii value of %c is = %d", ch, ch);
        ch++;
    } while (ch <= 'z');
}
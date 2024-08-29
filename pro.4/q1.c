#include <stdio.h>
int main()
{
    int marks;
    char ch;
    printf("enter the marks:-");
    scanf("%d", &marks);
    ch = marks >= 90
             ? 'A'
         : marks >= 80
             ? 'B'
         : marks >= 70
             ? 'C'
         : marks >= 60
             ? 'd'
         : marks >= 50
             ? 'e'
         : marks >= 33
             ? 'f'
             : printf("sorry");
    printf("\n%c", ch);
    if (ch == 'A')
    {
        printf("\nyour grade is 'A' excellent work");
    }
    else if (ch == 'B')
    {
        printf("your grade is 'B' well done");
    }
    else if (ch == 'c')
    {
        printf("your grade is 'c' good job");
    }
    else if (ch == 'D')
    {
        printf(" your grade is 'd' You passed but you could do better");
    }
    else if (ch == 'E')
    {
        printf("your grade is E you need to study hard");
    }
    else if (ch == 'F')
    {
        printf("your grade is F sorry you fail!!!");
    }
    return 0;
}

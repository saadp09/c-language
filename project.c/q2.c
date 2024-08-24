#include<stdio.h>
int main()

{
    int baseSalary,HRA,DA,TA,grossSalary;
    printf("enter the base salary:-");
    scanf("%d",&baseSalary);

    HRA=baseSalary*10/100;
    DA=baseSalary*5/100;
    TA=baseSalary*8/100;

    grossSalary=baseSalary+HRA+DA+TA;

printf("gross salary is %d",grossSalary);
    
    return 0;
}

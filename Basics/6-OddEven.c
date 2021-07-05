//Program to check whether the given number is Odd or Even.

#include<stdio.h>

int main()
{
    int num;
    printf("Enter any number to check which is odd or even \t");
    scanf("%d", &num);
    if(num%2==0)
    {
        printf("%d is even number",num );
    }
    else
    {
        printf("%d is odd number", num );
    }
    return 0;
}


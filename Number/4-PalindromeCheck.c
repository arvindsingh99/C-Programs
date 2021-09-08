// Program to find whether given number is palindrome or not

#include <stdio.h>

int main()
{
    int num, rev = 0, x, y;
    printf("Enter a number to check the number is palindrome or not \t");
    scanf("%d", &num);
    y = num;
    while (num > 0)
    {
        x = num % 10;
        rev = rev * 10 + x;
        num = num / 10;
    }
    if (y == rev)
    {
        printf("The given number %d is a palindrome number", y);
    }
    else
    {
        printf("The given number %d is not a palindrome number", y);
    }
}
// Program to Reverse of a number

#include <stdio.h>

int main()
{
    int num, revNum = 0, x, y;
    printf("Enter a Number");
    scanf("%d", &num);
    y = num;
    while (num > 0)
    {
        x = num % 10;
        revNum = revNum * 10 + x;
        num = num / 10;
    }
    printf("The Reverse of the %d is %d", y, revNum);
    return 0;
}
// Progrom to find the sum of all integers divisible by 2 between two numbers

#include <stdio.h>
int main()
{
    int num1, num2, sum = 0;
    printf("Enter The Number 1\b ");
    scanf("%d", &num1);
    printf("Enter The Number 2\b ");
    scanf("%d", &num2);

    for (int i = num1; i <= num2; i++)
    {
        if (i % 2 == 0)
        {
            sum = sum + i;
        }
    }
    printf("The sum of all integers divisible by 2 between %d and %d is %d", num1, num2, sum);
    return 0;
}
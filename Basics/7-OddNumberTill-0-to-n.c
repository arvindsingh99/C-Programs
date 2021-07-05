// print the odd numbers till n.

#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter any number till you want print odd numbers");
    scanf("%d", &n);
    for (i = 0; i <= n; i++)
    {
        if (i % 2 != 0)
            printf("%d \n", i);
        else
        {
            continue;
        }
    }
    return 0;
}

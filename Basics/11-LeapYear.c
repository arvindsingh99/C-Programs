//Program for checking a specific year is leap year or not.

#include <stdio.h>

int main()
{
    int year;
    printf("Enter any Year to check it is leap year or not\t");
    scanf("%d", &year);

    if ((year % 400 == 0) || (year % 100 != 0) && (year % 4 == 0))
    {
        printf("%d is leap year", year);
    }
    else
    {
        printf("%d is not a leap year", year);
    }
    return 0;
}
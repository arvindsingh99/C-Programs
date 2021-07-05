//Program to convert given days into years, week and days

#include <stdio.h>

int main()
{
    int noOfDays, years, weeks, days;
    printf("Enter the total number of days \t");
    scanf("%d", &noOfDays);
    years = (noOfDays / 365);
    weeks = ((noOfDays%365)/7);
    days = ((noOfDays % 365) % 7);

    printf("%d years, %d weeks, %d days",years, weeks, days);
}
//Program to find gross ssalary of a employee.

#include<stdio.h>

int main()
{
    float basicPay, dearnessAllowance, grossSalary, ProvidentFund, houseRentAllowance;
    printf("Enter the basic pay or salary \t");

    scanf("%f", &basicPay);
     dearnessAllowance = 0.1* basicPay;
     ProvidentFund = 0.2* basicPay ;
     houseRentAllowance = 0.3* basicPay;

     grossSalary = (ProvidentFund + dearnessAllowance + houseRentAllowance + basicPay) ;

     printf("%f", grossSalary);
     return 0;
}
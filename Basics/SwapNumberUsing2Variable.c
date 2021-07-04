// Program for swapping two numbers using 3rd variable
#include <stdio.h>

int main()
{
    int a = 10, b = 20 ;
    printf("Value of a before swapping is %d \nValue of b before swapping is %d \n\n", a, b);
    a = a+b;
    b = a-b;
    a = a-b;
    printf("Value of a after swapping is %d \nValue of b after swapping is %d", a, b);
    return 0;
}
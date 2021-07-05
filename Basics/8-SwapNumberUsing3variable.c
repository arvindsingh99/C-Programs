#include <stdio.h>

int main()
{
    int a = 10, b = 20, c;
    printf("Value of a before swapping is %d \nValue of b before swapping is %d \n\n", a, b);
    c = a;
    a = b;
    b = c;
    printf("Value of a after swapping is %d \nValue of b after swapping is %d", a, b);
    return 0;
}
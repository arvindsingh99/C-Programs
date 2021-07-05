// Program to find biggest of three numbers
#include<stdio.h>
int main(){

    int num1, num2, num3 ;

    printf("Enter any three number for finding biggest of entered three numbers \t");
    scanf("%d %d %d", &num1, &num2, &num3);
    if((num1 > num2) && (num1 > num3)){
        printf("\n %d is greatest", num1);
    }
    else if((num2 > num1) && (num2 > num3)){
        printf("\n %d is greatest", num2);
    }

    else {
        printf("\n %d is greatest", num3);
    }
}


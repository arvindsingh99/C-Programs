//Program to find sum of numbers till n
#include<stdio.h>
int main(){
    int num, sum = 0, i;

    printf("Enetr any till you want to find the sum of numbers \t");

    scanf("%d", &num);

    for(i=0; i<= num; i++){
        sum = sum +i;
    }

    printf("%d is the total sum of number till %d", sum , num);
}
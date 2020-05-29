#include<stdio.h>
void main(){

int d1,d4,num,sum;
    printf("Enter a four digit number: ");
    scanf("%d",&num);
    d1=(num%10);
    d4=(num/1000);
    sum = d1 + d4;
    printf("\n The sum of the digits is: %d",sum);
    
}

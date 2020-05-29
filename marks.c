#include<stdio.h>
void main(){

int num1,num2,num3,num4,num5;
printf("Enter the num1\n");
scanf("%d",&num1);
printf("Enter the num2\n");
scanf("%d",&num2);
printf("Enter the num3\n");
scanf("%d",&num3);
printf("Enter the num4\n");
scanf("%d",&num4);
printf("Enter the num5\n");
scanf("%d",&num5);
float sum = num1 + num2 + num3 + num4 + num5 ;
float agregate = sum/500;
float percentage = sum/500*100;
printf("Agregate marks are %.2f\nPercentage marks are %.2f\n" , agregate , percentage);



}

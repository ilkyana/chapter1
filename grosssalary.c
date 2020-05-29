#include<stdio.h>
void main(){

int basic;
printf("Enter the basic salary");
scanf("%d" , &basic);
int allowance = basic * 40/100;
int rent = basic * 20/100;
int gross = basic - (allowance + rent);
printf("Gross salary is %d\n" , gross);

}

#include<stdio.h>
void main(){

printf("Enter the value in km");
float km;
scanf("%f" , &km);
float meter = km/1000;
float feet = km/3280.84;
float inches = km/39370.1;
float cm = km/100000;
printf("In meter %.2f\nIn feet %.2f\nIn inches %.2f\nIn centimeter %.2f\n" , meter , feet , inches , cm);


}

#include<stdio.h>
void main(){

int pop = 80000;
int total_Men = 80000*52/100;
int total_Litracy = 80000*48/100;
int total_Litrate_Men = 80000*35/100;
int total_Women = pop-totalMen;
int total_Litrate_Women= total_Litracy-total_Litrate_Men;
int total_iletrate_Women = total_Women-total_Litrate_Women;
int total_iletrate_Men = total_Litracy - total_Litrate_Men;
printf("%d%d",total_iletrate_Women,total_iletrate_Men);

}

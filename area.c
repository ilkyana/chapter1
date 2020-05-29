#include<stdio.h>
void main(){

int len,bre,rad;
int ar , per ;
printf("Enter the length");
scanf("%d",&len);
printf("Enter the breadth\n");
scanf("%d",&bre);
 ar = len*bre;
 per = 2*(len+bre);
printf("The area and perimeter of rectangle are : %d %d\n" ,ar , per);
printf("Enter the radius\n");
scanf("%d",&rad);
float cir = 2*3.14*rad;
float area = 3.14 *rad*rad;
printf("The circumference and area of circle %.2f %.2f" , cir , area);
}

# include<stdio.h>
void main(){
int c , d;
printf("Enter the value of c\n");
scanf("%d",&c);
printf("Enter the value of d\n");
scanf("%d",&d);
int temp = c;
c=d;
d=temp;
printf("%d%d",c,d);

}

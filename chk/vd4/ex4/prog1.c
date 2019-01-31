#include<stdio.h>
#include<myMath.h>
#include<mymod.h>
void main(){
double x,y;
printf("Enter 1st number :");
scanf("%lf",&x);
printf("Enter 2nd number :");
scanf("%lf",&y);
double a1=myAdd(x,y);
double a2=mySub(x,y);
double a3=myDiv(x,y);
double a4=mymod(x,y);
printf("Add result is : %lf\n",a1);
printf("Sub result is : %lf\n",a2);
printf("Div result is : %lf\n",a3);
printf("Mod result is : %lf\n",a4);
}

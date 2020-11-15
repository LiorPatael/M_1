#include <stdio.h>
#include "myMath.h"


int main(){
double x=0;
printf("Please insert a real number: \n");
scanf("%lf",&x);
float temp1=Exponent((int)x);
float temp2=Power(x,3);
float temp3=add(temp1,temp2);
float ans1=sub(temp3,2);

double temp5=mul(x,3);
double temp6=mul(Power(x,2),2);
float ans2=add((float)temp5,(float)temp6);

float temp7=div(mul(Power(x,3),4),5);
float temp8=mul(x,2);
float ans3=sub(temp7,temp8);
printf("The value of f(𝑥) = e^X +X^3 -2 at the point %0.4lf is : %0.4lf\n",x,ans1);

printf("The value of f(x) = 3X + 2X^2 at the point %0.4lf is  : %0.4lf\n",x,ans2);

printf("The value of f(x) = (4X^3)/5 -2X at the point %0.4lf is : %0.4lf\n",x,ans3);
return 0;
}

#include "myMath.h"
#define e 2.71828182846;

double Exponent(int x)
{
if(x==0)return 1;
double ans=e;
if(x>0){
while(x!=1){
ans=ans*e;
x--;
}
}
else{
while(x!=-1){
ans=ans*e;
x++;
}
ans=1/ans;
}
return ans;
}

double Power(double x, int y)
{
if(y==0) return 1;
float ans=x;
if(y>0){
while(y!=1){
ans=ans*x;
y--;
}
}
else{
while(y!=-1){
ans=ans*x;
y++;
}
ans=1/ans;
}
return ans;
}

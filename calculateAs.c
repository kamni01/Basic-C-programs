#include <stdio.h>
#include<math.h>
int main() {
int i;
float a,p,r,q,n;
for(i=1;i<=10;i++)
{
printf("Enter the value of p,r,n,q- ");
scanf("%f%f%f%f",&p,&r,&n,&q);
a=p*pow((1+r/q),(n*q));
printf("a=%f\n",a);
}
}
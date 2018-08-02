#include<stdio.h>
#include<math.h>
float min(float x, float y);
int main()
{ 
float a,b,c,s;
	printf("a=");scanf("%f", &a);
	printf("b=");scanf("%f", &b);
printf("u=min(a,b)=%.2f\n", min(a,b));
printf("min(a*b,a+b)=%.2f\n", min(a*b,a+b));
c=min(min(a,b)+pow(min(a,b), 2),3.14);
printf("min(u+u^2,3.14)=%.2f",c);
}
float min(float x, float y)
{
	float min;
	min=x;
	if(min>y) min=y;
	return min;
}

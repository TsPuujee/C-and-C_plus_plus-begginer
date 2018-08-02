#include<stdio.h>
float max(float x, float y);
int main()
{ 
float a,b,c,s;
	printf("a=");scanf("%f", &a);
	printf("b=");scanf("%f", &b);
	printf("c=");scanf("%f", &c);
s=(max(a,a+b)+max(a,b+c))/(1+max(a+b*c,1.5));
printf("%f", s);
}
float max(float x, float y)
{
	float max;
	max=x;
	if(max<y) max=y;
	return max;
}

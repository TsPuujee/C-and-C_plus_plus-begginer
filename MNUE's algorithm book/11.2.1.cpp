#include<stdio.h>
#include<math.h>
int ta(float x);
int fac(float x);
int main()
{
	float S,y;
	printf("y="); scanf("%f", &y);
	S=(1*7*ta(0.25)+2*ta(1+y))/(6-ta(y*y-1));
	printf("ilerhiilehiin utga: %f", S);
}
int ta(float x)
{
	int k, ta=0;
	for(k=0;k<=10;k++)
	{
	ta=ta+((pow(x,2*k+1))/(fac(2*k+1)))/((pow(x,2*k))/2*k);
	}
	return ta;
}
int fac(float x)
{
int fac=1,i;
for(i=1;i<=x;i++)
{
	fac=fac*i;
}
return fac;
}

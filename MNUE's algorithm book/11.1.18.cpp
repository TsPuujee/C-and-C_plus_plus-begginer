#include<stdio.h>
#include<math.h>
int fac(int x);
int main()
{
	int s;
	s=(2+fac(5)+3*fac(8))/(fac(6)+fac(4));
	printf("%d",s);
}
int fac(int x)
{
int fac=1,i;
for(i=1;i<=x;i++)
{
	fac=fac*i;
}
return fac;
}

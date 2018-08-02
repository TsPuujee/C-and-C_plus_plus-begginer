#include<stdio.h>
#include<math.h>
int kw(int a, int b, int c);
int main()
{
	int a, b, c, t;
    printf("a="); scanf("%d",&a);
    printf("b="); scanf("%d",&b);
    printf("c="); scanf("%d",&c);
    t=kw(a,b,c)+kw(b,a,c)+kw(c,a,b);
    printf("%d shirheg tegshitgel bodit yzguurtai", t);
}
int kw(int a,int b,int c)
{
	int D;
	D=b*b-4*a*c;
	if(D>=0) D=1;
	else D=0;
	return D;
}

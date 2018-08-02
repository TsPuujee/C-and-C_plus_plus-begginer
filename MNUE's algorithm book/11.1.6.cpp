#include<stdio.h>
#include<math.h>
int sign(int a);
int main()
{
	int x, y, z;
    printf("x="); scanf("%d",&x);
    printf("y="); scanf("%d",&y);
    z=sign(x)+sign(y);
    printf("z=%d", z);
}
int sign(int a)
{
	int sign;
	if(a==0) sign=0;
	else if(a<0) sign=-1;
	     else sign=1;
	return sign;
}

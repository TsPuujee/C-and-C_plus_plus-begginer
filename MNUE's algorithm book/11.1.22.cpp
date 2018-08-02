#include<stdio.h>
#include<math.h>
int pal(int x);
int main()
{
	int a,b;
	printf("a="); scanf("%d", &a);
	printf("b="); scanf("%d", &b);
	if(pal(a)==1 || pal(b)==1) printf("Yes");
	else printf("no");
	for(;;);
}
int pal(int x)
{
int urvuu,r,k,pal;
k=x;
urvuu=0;
while (k>0)
{
r=k%10;
urvuu=urvuu*10+r;
k=k/10;
}
if (urvuu==x) pal=1;
return pal;
}

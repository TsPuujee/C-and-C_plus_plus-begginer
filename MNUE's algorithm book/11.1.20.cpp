#include<stdio.h>
#include<math.h>
int too(int x);
int main()
{
	int a,b;
	printf("a="); scanf("%d", &a);
	printf("b="); scanf("%d", &b);
	if(too(a)<too(b)) printf("a too buyu %d too olon orontoi",b);
	else printf("b too buyu %d too olon orontoi", a);
	for(;;);
}
int too(int x)
{
int too=0;
do {
too++;
x=x/10; }
while(x>1);
return too;
}

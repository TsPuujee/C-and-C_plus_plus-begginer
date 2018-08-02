#include<stdio.h>
#include<math.h>
int sum(int x);
int main()
{
	int a,b;
	printf("a="); scanf("%d", &a);
	printf("b="); scanf("%d", &b);
	if(sum(a)==sum(b)) printf("tentsuu");
	else {
	if(sum(a)<sum(b)) printf("%d toony tsifr ih",b);
	else printf("%d toony tsifr ih", a);
}
	for(;;);
}
int sum(int x)
{
int sum=0,i;
do {
sum=sum+(x%10);
x=x/10; }
while(x>1);
return sum;
}

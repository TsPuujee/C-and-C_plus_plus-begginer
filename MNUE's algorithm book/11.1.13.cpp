#include<stdio.h>
int tegsh(int a);
int main()
{
	int a, b, i,n,t1=0,t2=0;
	do
	{
	printf("a daraalaliin urtiig oruul:\t"); scanf("%d", &a);
	printf("b daraalaliin urtiig oruul:\t"); scanf("%d", &b);
    }
    while(a<=0 || b<=0);

	for(i=1; i<=a; i++)
	{
		printf("a%d=", i); scanf("%d", &n);
		if(tegsh(n)==1) t1=t1+1;
	}
	for(i=1; i<=b; i++)
	{
		printf("b%d=", i); scanf("%d", &n);
		if(tegsh(n)==1) t2=t2+1;
	}
	printf("a daraalald %d shirheg tegsh too baina\nb daraalald %d shirheg tegsh too baina", t1, t2);
	for(;;);
}
int tegsh(int a)
{
	int tegsh;
	if(a%2==0) tegsh=1;
	return tegsh;
}

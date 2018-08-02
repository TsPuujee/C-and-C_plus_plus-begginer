#include<stdio.h>
#include<math.h>
int anh(int x);
int main()
{
	int i,t=1;
	for(i=1; i<=200; i++)
	{
		if(anh(i)==1 && anh(i+2)==1) {
		printf("%d deh anhii hos too bol %d %d\n",t,i,i+2); 
		t++;
		}
	}
}
int anh(int x)
{
	int anh,i,t=0;
	for(i=2;i<=x;i++)
	{
		if(x%i==0) t++;
	}
	if(t==1) anh=1;
	return anh;
}

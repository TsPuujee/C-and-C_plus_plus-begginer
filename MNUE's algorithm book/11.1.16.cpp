#include<stdio.h>
#include<math.h>
int anh(int x);
int main()
{
	int i,t=1;
	for(i=100; i<=999; i++)
	{
		if(anh(i)==1) {
		printf("%d dehi 3 orontoi anhnii too: %d\n",t,i); 
		t++; }
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

#include<stdio.h>
#include<math.h>
int az(int x);
int main()
{
	int a,b,c,t=0;
    for(a=100000; a<=999999;a++)
	{
		b=a/1000; c=a%1000;
		if(az(b)==az(c))
		{
			t++;
			printf("%d\t",a);
		}
		
	}
	
	for(;;);
}
int az(int x)
{
int az=0;
do {
az=az+(x%10);
x=x/10; }
while(x>1);
return az;
}

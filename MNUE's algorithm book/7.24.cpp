#include<stdio.h>
#include<math.h>
int main()
{
	int i, t=1;
	float min,a,n;
	for(n=1;n<=100;n++)
	{
	min=fabs(sin(1));
	for(i=2;i<=n;i++)
	  {
	  	a=sin(i);
	   if(fabs(a)<min)
	      {
	      	min=fabs(a);
	      	t=n;
		  }
	  }
   } 
	printf("min=%f\ndugaar ni %d",min, t);
	for(;;);
}

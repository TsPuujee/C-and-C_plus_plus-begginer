#include <stdio.h>
#include <stdlib.h>
int main()
{
unsigned long long array[20],j;
for(j=0;j<20;j++)
{
if(j<3)
	{
		array[j]=1;
	}
else
    { 
    array[j]=(j+3)*(array[j-1]-1)+(j+4)*(array[j-3]);
    }
 printf("%llu=%llu\t",j+1,array[j]);
}
return 0;
}


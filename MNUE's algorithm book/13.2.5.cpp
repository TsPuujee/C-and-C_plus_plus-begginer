#include <stdio.h>
#include <stdlib.h>
int main()
{
int array[20], i,sum=0;
printf("ogogdson massiw:\n");
for(i = 0; i < 20; i++)
    {
    array[i] = (rand() % 50)+50;
    printf("%d=%d\t",i, array[i]);
    }
for(i=0;i<20;i++)
   {
   	if(i%2==0)
   	   {
   	   	sum=sum+array[i];
	   }
   }
   printf("tegsh dugaartai gishuudiin niilber=%d",sum); 
    return 0;
}

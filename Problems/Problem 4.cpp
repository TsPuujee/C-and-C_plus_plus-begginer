//2-tyn toololyn system-ees 10-t ruu 10-aas 2t ruu shiljiileh
#include <stdio.h>
#include <math.h>
int ho_ar(int n);
int ar_ho(int n);
int main()
{
   int n;
   char c;
   
   printf("Instructions:\n");
   printf("1. Ta hoyortiin toolloos arawtruu shiljuuleh bol A gej bicheed enter darna uu? \n");
   printf("2. Ta arawtiin toolloos  hoyortruu shiljuuleh bol B gej bicheed enter darna uu? \n");
   scanf("%c",&c);
 
   if (c =='a' || c == 'A')
   {
       printf("hoyortiin toog oruul: ");
       scanf("%d", &n);
       printf("2-tyn %d  =  arawtyn %d ", n, ho_ar(n));
   }
   if (c =='b' || c == 'B')
   {
       printf("arawtiin toog oruul: ");
       scanf("%d", &n);
       printf("arawtyn %d  = hoyortyn %d ", n, ar_ho(n));
   }
   return 0;
}

int ar_ho(int n)  
{
    int sana, i=1, hoyr=0;
    while (n!=0)
    {
        sana=n%2;
        n/=2;
        hoyr=hoyr+sana*i;
        i=i*10;
    }
    return hoyr;
}

int ho_ar(int n) 

{
    int araw=0, i=0, sana;
    while (n!=0)
    {
        sana = n%10;
        n/=10;
        araw =araw+sana*pow(2,i);
        i++;
    }
    return araw;
}

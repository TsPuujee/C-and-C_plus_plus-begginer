#include <stdio.h>
int max(int a[]);
int main()
{
 int a[100], b[100], m, n, i,q;
  printf("n="); scanf("%d", &n);  printf("m="); scanf("%d", &m);
  for(i=0;i<=n;i++)
     {
     printf("a[%d]=",i); scanf("%d", &a[i]);
     }
  for(i=0;i<=m;i++)
     {
     printf("b[%d]=",i); scanf("%d", &b[i]);
     }
     q=max(a);
	 printf("max(a)=%d\t", q);
	 printf("max(b)=%d\t", max(b));
	 return 0;
 }
 int max(int a[])
 {
 
 int i,max;

   for(i=0;i<=10;i++)
   {
   if(max<a[i]) 
       {
       max=a[i];
       } 
   }
   return max;
}


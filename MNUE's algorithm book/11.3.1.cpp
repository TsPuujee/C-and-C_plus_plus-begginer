#include <stdio.h>
int soli(int a, int b);
int main()
{
 int a,b,c,d;
 printf("a="); scanf("%d", &a);
 printf("b="); scanf("%d", &b);
 printf("c="); scanf("%d", &c);
 printf("d="); scanf("%d", &d);
 soli(a,b);
 soli(c,d);
 printf("a=%d\t", a); printf("b=%d\t", b); printf("c=%d\t", c); printf("d=%d\t", d);
	 return 0;
 }
 int soli(int a, int b)
 {
 
 int i;
i=b;
b=a;
a=i;
   return a;
return b;
}


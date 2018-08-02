#include<stdio.h>
#include<math.h>
int too(int x);
int main()
{
	int n,i,k,k1,k2;
	unsigned long long s=1,s1;
	printf("n="); scanf("%d", &n);
  for(i=2;i<=n;i++)
      {
      	k=too(i);
      	s=s*pow(10,k)+i;
	  }
	  k1=too(s);
	  k2=pow(10,(k1-n));
	   s1=s/k2;
	  s1=s1%10;
	  printf("uuseh too: %llu\n",s);
	  printf("%d dugeer tsifr ni: %d",n,s1);
	for(;;);
}
int too(int x)
{
int too=0;
do {
too++;
x=x/10; }
while(x>=1);
return too;
}

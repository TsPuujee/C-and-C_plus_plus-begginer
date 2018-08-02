#include<stdio.h>
#include<math.h>
int tanih(int x); 
int main()
{
     int a,i,t=0,n,b;
     printf("n="); scanf("%d",&n);
     for(i=1; i<=n;i++)
     {
     	printf("a%d=", i); scanf("%d", &b);
     	if(tanih(b)==1) t=t+1;
	 }
     printf("niit: %d baina",t); 
     return 0;
}
int tanih(int x)        
{             
     int tanih,i;
     float y;
     y=sqrt(x);
     for(i=1;i<=x;i++) {if(i==y) tanih=1;}
     return tanih;                  
}  

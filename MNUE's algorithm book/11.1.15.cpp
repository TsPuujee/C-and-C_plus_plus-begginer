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
     int tanih,i=1,f;
     do{
	f=pow(5,i);
	 if(f==x) tanih=1;
	 i++;
	 }
	 while(f<=x);
     return tanih;                  
}  

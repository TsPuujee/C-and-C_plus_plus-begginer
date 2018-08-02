#include <stdio.h>
int max(int x, int y); 
int main(){
     int a,b,c,d,f,e,M;
     printf("a="); scanf("%d",&a);
     printf("b="); scanf("%d",&b);
     printf("c="); scanf("%d",&c);
     printf("d="); scanf("%d",&d);
     printf("f="); scanf("%d",&f);
     printf("e="); scanf("%d",&e);
	M=max(max(max(a,b),max(c,d)),max(f,e));
     printf("Hamgiin ih ni: %d",M); 
     return 0;
}
int max(int x,int y)        
{             
     int max;
     max=x;
     if(x<y) max=y;
     return max;                  
}  

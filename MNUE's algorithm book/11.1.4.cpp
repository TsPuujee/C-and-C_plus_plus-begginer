#include <stdio.h>
int max(int x, int y); 
int main(){
     int a,b,z;
     printf("a="); scanf("%d",&a);
     printf("b="); scanf("%d",&b);
     z=max(a,2*b)*max(2*a-b,b);     
     printf("z=%d",z); 
     return 0;
}
int max(int x,int y)        
{             
     int max;
     max=x;
     if(x<y) max=y;
     return max;                  
}  

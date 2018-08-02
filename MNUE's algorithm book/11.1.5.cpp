#include <stdio.h>
int min(int x, int y); 
int main()
{
     int a,b,z;
     printf("a="); scanf("%d",&a);
     printf("b="); scanf("%d",&b);
     z=min(a,3*b)*min(2*a-b,2*b);     
     printf("z=%d",z); 
     return 0;
}
int min(int x,int y)        
{             
     int min;
     min=x;
     if(x>y) min=y;
     return min;                  
}  

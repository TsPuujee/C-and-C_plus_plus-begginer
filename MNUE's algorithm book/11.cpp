#include <stdio.h>
float min(float a[],int j);
int main(){
     float a[100],j;
     int i,n,m,k;
     printf("a matriciin urtiig oruul:"); scanf("%d", &n);
     for(i=0;i<n;++i)      
       {
       printf("a[%d]-g oruul: ",i+1);
       scanf("%f",&a[i]);
       }
       j=min(a,n);
       printf("%f",min(a,n));
     return 0;
 }
 float min(float a[], int j)
{ 
     int i;
     float min=a[0];
     for(i=1;i<j;i++)
	 {
       if(min>a[i]) {
	   min=a[i];
	   }
     }
     return min;
}


#include <stdio.h>
#include<math.h>
float min(float a[],int j);
float max(float a[],int j);
int main(){
     float a[100],b[100], c[100],j;
     int i,n,m,k;
     printf("a matriciin urtiig oruul:"); scanf("%d", &n);
     printf("b matriciin urtiig oruul:"); scanf("%d", &m);
     printf("c matriciin urtiig oruul:"); scanf("%d", &k);
	 for(i=0;i<n;++i)      
       {
       printf("a[%d]-g oruul: ",i+1);
       scanf("%f",&a[i]);
       }
       for(i=0;i<m;++i)      
       {
       printf("b[%d]-g oruul: ",i+1);
       scanf("%f",&b[i]);
       }
       for(i=0;i<k;++i)      
       {
       printf("c[%d]-g oruul: ",i+1);
       scanf("%f",&c[i]);
       }
       if(fabs(min(a,n))>10) j=min(b,m)+min(c,k);
       else j=1+pow(fabs(max(c,k)),2);
       printf("L=%.2f",j);
     return 0;
   }
float min(float a[], int j)
{ 
     int i;
     float min;
     min=a[0];
     for(i=0;i<j;i++)
	 {
       if(min>a[i]) min=a[i];
     }
     return min;
}
float max(float a[], int j)
{ 
     int i;
     float max;
     max=a[0];
     for(i=0;i<j;i++)
	 {
       if(max<a[i]) max=a[i];
     }
     return max;
}

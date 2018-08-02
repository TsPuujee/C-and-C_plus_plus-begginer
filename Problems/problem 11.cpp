//c matric-iin dundajiig oloh 
#include <stdio.h>
float average(float a[],int j);
int main(){
     float avg, c[100];
     int i,j;
     printf("c matriciin urtiig oruul:"); scanf("%d", &j);
     for(i=0;i<j;++i)      
       {
       printf("c%d-g oruul: ",i+1);
       scanf("%f",&c[i]);
       }
     avg=average(c,j);   //average funct-iig duudah 
     printf("c matriciin dundaj=%.2f",avg);
     return 0;
   }
float average(float a[], int j)
{ 
     int i;
     float avg, sum=0.0;
     for(i=0;i<=j;++i){
       sum+=a[i];
     }
     avg =(sum/j);
     return avg;
}

//matric niilber oloh
#include <stdio.h>
int main(){
   float a[2][2], b[2][2], c[2][2];
   int i,j;
   printf("1-r matric-iin toog oruul\n");

   for(i=0;i<2;++i)      
       for(j=0;j<2;++j){
       printf("a%d%d-g oruul: ",i+1,j+1);
       scanf("%f",&a[i][j]);
       }
   printf("2-r matric-iin toog oruul\n");
   for(i=0;i<2;++i)
       for(j=0;j<2;++j){
       printf("b%d%d-g oruul: ",i+1,j+1);
       scanf("%f",&b[i][j]);
       }
   for(i=0;i<2;++i)
       for(j=0;j<2;++j){
       c[i][j]=a[i][j]+b[i][j]; 
       }
   printf("\n2 matric-iig nemhed garsan matric:\n");
   for(i=0;i<2;++i)
       for(j=0;j<2;++j){
       printf("%.1f\t",c[i][j]);  
           if(j==1)           
              printf("\n");
      }
return 0;
}

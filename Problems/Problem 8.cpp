//dundaj onoo
#include <stdio.h>
int main(){
     int marks[50],i,n,sum=0;
     printf("Oyutnii toogoo oruul: ");
     scanf("%d",&n);
     for(i=0;i<n;++i){
          printf("%d-r suragchiin onoo: ",i+1);
          scanf("%d",&marks[i]);
          sum+=marks[i];
     }
     printf("Dundaj= %d",sum/n);
return 0;
}

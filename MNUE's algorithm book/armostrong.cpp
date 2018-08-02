#include<stdio.h>
int main(){
    int num,r,sum,temp;
    int min,max;

    printf("Baga hyzgaariin utga: ");
    scanf("%d",&min);

    printf("Ih hyzgaariin utga: ");
    scanf("%d",&max);

    printf("Oruulsan hyzgaariin hoorondoh Armstrong too: ");
    for(num=min;num<=max;num++){
         temp=num;
         sum = 0;

         while(temp!=0)
        {
             r=temp%10;
             temp=temp/10;
             sum=sum+(r*r*r);
         }
         if(sum==num)
             printf("%d ",num);
    }

    return 0;
}

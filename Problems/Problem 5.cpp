//Oruulsan toog Armstrong-iin too ba Anhny too mun esehiig shalgana.
#include <stdio.h>
int prime(int n);
int armstrong(int n);
int main()
{
    char c;
    int n,temp=0;
    printf("Shinjileh toogoo oruul: ");
    scanf("%d",&n);
    temp=prime(n);
        if(temp==1)
           printf("%d Anhny too mun.", n);
        else
           printf("%d Anhny too bish.", n);
   temp=armstrong(n);
        if(temp==1)
           printf("\n%d Armstrong-iin too mun.", n);
        else
           printf("\n%d Armstrong-iin too bish.",n);
    return 0;
}
int prime(int n)
{
    int i, flag=1;
    for(i=2; i<=n/2; ++i)
    {
       if(n%i==0)
       {
          flag=0;
          break;
       }
    }
    return flag;
}
int armstrong(int n)
{
    int num=0, temp, flag=0;
    temp=n;
    while(n!=0)
    {
        num+=(n%10)*(n%10)*(n%10);
        n/=10;
    }
    if (num==temp)
       flag=1;
    return flag;
}

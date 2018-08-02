//ogogdson toog 2 shirheg anhny toon niilber bolgoj zadal
#include <stdio.h>
int prime(int n);
int main()
{
    int n, i, flag=0;
    printf("Toogoo oruul: ");
    scanf("%d",&n);
    for(i=2; i<=n/2; ++i)
    {
        if (prime(i)!=0)
        {
            if ( prime(n-i)!=0)
            {
                printf("%d = %d + %d\n", n, i, n-i);
                flag=1;
            }

        }
    }
    if (flag==0)
      printf("%d-g 2 shirheg anhny toon niilbert zadalj bolohgui.",n);
    return 0;
}
int prime(int n)    
{
    int i, flag=1;
    for(i=2; i<=n/2; ++i)
       if(n%i==0)
          flag=0;
    return flag;
}

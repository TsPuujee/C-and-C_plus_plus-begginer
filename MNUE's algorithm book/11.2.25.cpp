#include <stdio.h>
int hieh(int m, int n)
{
    int r;
    if((m == 0) || (n == 0))
        return 0;
    else if((m < 0) || (n < 0))
        return -1;
    do
    {
        r = m % n;
        if(r == 0)
            break;
        m = n;
        n = r;
    }
    while(true);
    return n;
}

int main()
{
    int num1 , num2, s,t;
    printf("num1="); scanf("%d", &num1);
    printf("num2="); scanf("%d", &num2);
    s=hieh(num1,num2);
    if(num1<num2)
       	t=num1/s;
    else t=num2/s;
    printf("%d ba %d-iin hamgiin ih yeronhii huwaagch ni %d\n", num1, num2, s);
     printf("yeronhii dawtalt ni %d baina", t );
    return 0;
    for(;;);
}

#include<stdio.h>
#include<math.h>
int zai(int x1,int x2, int y1, int y2);
int main()
{
	int x1, x2, y1, y2,x3, y3,z;
    printf("x1="); scanf("%d",&x1);
    printf("x2="); scanf("%d",&x2);
    printf("x3="); scanf("%d",&x3);
    printf("y2="); scanf("%d",&y2);
    printf("x3="); scanf("%d",&x3);
    printf("y3="); scanf("%d",&y3);
	z=zai(x1,x2,y1,y2)+zai(x1,x2,y3,y3)+zai(x3,x3,y1,y2);
    printf("gurvaljinii primetr ni: %d", z);
}
int zai(int x1,int x2, int y1, int y2)
{
	int zai;
	zai=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
	return zai;
}

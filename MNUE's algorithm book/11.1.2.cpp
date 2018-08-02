#include<stdio.h>
#include<math.h>
int main()
{
	float x, y;
	x=(15+sqrt(8))/3+(6+sqrt(12))/(sqrt(6)+12)+(7+sqrt(21))/(21+sqrt(7));
	y=(2+sin(2))/(sin(5)+5)+(6+sin(6))/(sin(3)+3)+(1+sin(1))/(sin(4)+4);
	printf("x=%.1f\ny=%.1f", x, y);
	for(;;);
}

#include<stdio.h>
#include<math.h>
int main()
{
	float x, y;
	x=pow(6, 1/6)/2+(sqrt(13)+13)/2+(sqrt(21)+21)/2;
	y=(1+sin(1))/3+(5+sin(5))/3+(3+(sin(3)))/3;
	printf("x=%.1f\ny=%.1f", x, y);
	for(;;);
}

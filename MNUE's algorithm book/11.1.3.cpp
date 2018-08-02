#include<stdio.h>
#include<math.h>
int main()
{
	float x, y;
	x=(13+sqrt(7))/(7+sqrt(13))+(15+sqrt(12))/(12+sqrt(15))+(sqrt(21)+32)/(sqrt(32)+21);
	y=(1+sin(4))/(4+sin(1))+(7+sin(5))/(5+sin(7))+(3+sin(2))/(2+sin(3));
	printf("x=%.1f\ny=%.1f", x, y);
	for(;;);
}

#include <stdio.h>
#include <math.h>

double g = 9.8;

void main()
{
	double m, s;

	printf("질량을 입력하세요 : ");
	scanf_s("%lf", &m);
	printf("운동마찰계수를 입력하세요 : ");
	scanf_s("%lf", &s);
	printf("(a) 나무 상자를 일정한 속력으로 움직이는데 필요한 수평력은 %.2lfN입니다.\n", m * g * s);
	printf("(b) 만일 운동마찰계수가 0이라면 상자를 움직이는데 필요한 수평력은 %.2lf N입니다.\n", m * g * 0);

}
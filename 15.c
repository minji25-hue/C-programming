#include <stdio.h>
#include <math.h>

double g = 9.80;

void main()
{
	double m, s, k;
	
	printf("질량을 입력하세요 = ");
	scanf_s("%lf", &m);
	printf("정지마찰계수를 입력하세요 = ");
	scanf_s("%lf", &s);
	printf("운동마찰계수를 입력하세요 = ");
	scanf_s("%lf", &k);

	printf("(a) 최대정지마찰력 = % lf\n", m * g * s);
	printf("(b) 운동마찰력 = % lf\n", m * g * k);
	printf("(c) 물체를 22N의 힘으로 끌 때 물체의 가속도 = % lf\n", (22 - m * g * k) / m);
}

#include <stdio.h>
#include <math.h>
#define PI 3.14

double g = 9.8;
double Ux = 0.8;

int main()
{
	double theta_rad = atan(Ux);
	double theta_deg = theta_rad * 180 / PI;

	printf("자동차를 주차할 수 있는 최대 경사각은 약 %.2lf도입니다.\n", theta_deg);

}
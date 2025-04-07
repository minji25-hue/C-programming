//-----------------------------------------------------------------------------------------

//벡터 합과 내적, 외적 계산프로그램(3차원)

//-----------------------------------------------------------------------------------------

#include <stdio.h>
#include <math.h>

void main(void) {
	//변수
	double x1 = 0.0;
	double x2 = 0.0;
	double y1 = 0.0;
	double y2 = 0.0;
	double z1 = 0.0;
	double z2 = 0.0;
	double dot_product = 0.0;
	double cross_product = 0.0;
	double sum_x = 0.0;
	double sum_y = 0.0;
	double sum_z = 0.0;
	double angle_radian = 0.0;
	double angle_degree = 0.0;
	double pi = 3.14159;

	//첫 번째 벡터 입력 받기
	printf("x1를 입력해 주세요 : ");
	scanf_s("%lf", &x1);
	printf("y1를 입력해 주세요 : ");
	scanf_s("%lf", &y1);
	printf("z1를 입력해 주세요 : ");
	scanf_s("%lf", &z1);

	//두 번째 벡터 입력 받기
	printf("x2를 입력해 주세요 : ");
	scanf_s("%lf", &x2);
	printf("y2를 입력해 주세요 : ");
	scanf_s("%lf", &y2);
	printf("z2를 입력해 주세요 : ");
	scanf_s("%lf", &z2);

	//벡터의 합 계산
	sum_x = x1 + x2;

	sum_y = y1 + y2;

	sum_z = z1 + z2;

	//각도값 계산
	angle_radian = atan2(sum_y, sum_x);

	//각도값을 radian으로 계산
	angle_degree = angle_radian * 180.0 / pi;

	//벡터의 내적 계산
	dot_product = sum_x * sum_y * cos(angle_degree);

	//벡터의 외적 계산 (2차원 벡터의 외적은 스칼라 값으로, z축 방향의 크기를 나타냅니다)
	cross_product = sum_x * sum_y * sin(angle_degree);

	//결과 출력
	printf("\n벡터 1: %6.2lf, %6.2lf, %6.2lf", x1, y1, z1);

	printf("벡터 2: %6.2lf, %6.2lf, %6.2lf", x2, y2, z2);

	printf("\n벡터의 합: %6.2lf, %6.2lf, %6.2lf", sum_x, sum_y, sum_z);

	printf("벡터의 내적: %6.2lf", dot_product);

	printf("벡터의 외적: %6.2lf", cross_product);
}
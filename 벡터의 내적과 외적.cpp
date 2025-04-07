//-----------------------------------------------------------------------------------------

//���� �հ� ����, ���� ������α׷�(2����)

//-----------------------------------------------------------------------------------------

#include <stdio.h>
#include <math.h>

void main(void) {
	//����
	double x1 = 0.0;
	double x2 = 0.0;
	double y1 = 0.0;
	double y2 = 0.0;
	double dot_product = 0.0;
	double cross_product = 0.0;
	double sum_x = 0.0;
	double sum_y = 0.0;
	double angle_radian = 0.0;
	double angle_degree = 0.0;
	double pi = 3.14159;

	//ù ��° ���� �Է� �ޱ�
	printf("x1�� �Է��� �ּ��� : ");
	scanf_s("%lf", &x1);
	printf("y1�� �Է��� �ּ��� : ");
	scanf_s("%lf", &y1);

	//�� ��° ���� �Է� �ޱ�
	printf("x2�� �Է��� �ּ��� : ");
	scanf_s("%lf", &x2);
	printf("y2�� �Է��� �ּ��� : ");
	scanf_s("%lf", &y2);

	//������ �� ���
	sum_x = x1 + x2;

	sum_y = y1 + y2;

	//������ ���
	angle_radian = atan2(sum_y, sum_x);

	//�������� radian���� ���
	angle_degree = angle_radian * 180.0 / pi;

	//������ ���� ���
	dot_product = sum_x * sum_y * cos(angle_degree);

	//������ ���� ��� 
	cross_product = sum_x * sum_y * sin(angle_degree);

	//��� ���
	printf("\n���� 1: %6.2lf, %6.2lf", x1, y1);

	printf("���� 2: %6.2lf, %6.2lf", x2, y2);

	printf("\n������ ��: %6.2lf, %6.2lf", sum_x, sum_y);

	printf("������ ����: %6.2lf", dot_product);

	printf("������ ����: %6.2lf", cross_product);
}
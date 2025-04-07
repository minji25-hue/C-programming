//-----------------------------------------------------------------------------------------

//���� �հ� ����, ���� ������α׷�(3����)

//-----------------------------------------------------------------------------------------

#include <stdio.h>
#include <math.h>

void main(void) {
	//����
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

	//ù ��° ���� �Է� �ޱ�
	printf("x1�� �Է��� �ּ��� : ");
	scanf_s("%lf", &x1);
	printf("y1�� �Է��� �ּ��� : ");
	scanf_s("%lf", &y1);
	printf("z1�� �Է��� �ּ��� : ");
	scanf_s("%lf", &z1);

	//�� ��° ���� �Է� �ޱ�
	printf("x2�� �Է��� �ּ��� : ");
	scanf_s("%lf", &x2);
	printf("y2�� �Է��� �ּ��� : ");
	scanf_s("%lf", &y2);
	printf("z2�� �Է��� �ּ��� : ");
	scanf_s("%lf", &z2);

	//������ �� ���
	sum_x = x1 + x2;

	sum_y = y1 + y2;

	sum_z = z1 + z2;

	//������ ���
	angle_radian = atan2(sum_y, sum_x);

	//�������� radian���� ���
	angle_degree = angle_radian * 180.0 / pi;

	//������ ���� ���
	dot_product = sum_x * sum_y * cos(angle_degree);

	//������ ���� ��� (2���� ������ ������ ��Į�� ������, z�� ������ ũ�⸦ ��Ÿ���ϴ�)
	cross_product = sum_x * sum_y * sin(angle_degree);

	//��� ���
	printf("\n���� 1: %6.2lf, %6.2lf, %6.2lf", x1, y1, z1);

	printf("���� 2: %6.2lf, %6.2lf, %6.2lf", x2, y2, z2);

	printf("\n������ ��: %6.2lf, %6.2lf, %6.2lf", sum_x, sum_y, sum_z);

	printf("������ ����: %6.2lf", dot_product);

	printf("������ ����: %6.2lf", cross_product);
}
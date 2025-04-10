#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
// �߷°��ӵ�
#define G 9.8
#define DEG_TO_RAD(angle) ((angle) * M_PI / 180.0)
#define RAD_TO_DEG(angle) ((angle) * 180.0 / M_PI)

int main() {
    double speed, angleDeg;
    double Vx0, Vy0;

    // �Է�
    printf("�߻� �ӵ� (m/s)�� �Է��ϼ���: ");
    scanf_s("%lf", &speed);

    printf("�߻� ���� (��)�� �Է��ϼ���: ");
    scanf_s("%lf", &angleDeg);

    // ������ �������� ��ȯ
    double angleRad = DEG_TO_RAD(angleDeg);

    // 1) x, y ������ �ʱ�ӵ�
    Vx0 = speed * cos(angleRad);
    Vy0 = speed * sin(angleRad);
    printf("\n1) �ʱ� �ӵ� ����: Vx0 = %.2f m/s, Vy0 = %.2f m/s\n", Vx0, Vy0);

    // 2) �ְ����� ����
    double h_max = (Vy0 * Vy0) / (2 * G);
    printf("2) �ְ����� ����: %.2f m\n", h_max);

    // 3) �ְ��� ���� �ð�
    double t_peak = Vy0 / G;
    printf("3) �ְ��� ���� �ð�: %.2f s\n", t_peak);

    // 4) �������� �̵��� �ִ� �Ÿ�
    double total_time = 2 * t_peak;
    double range = Vx0 * total_time;
    printf("4) �������� �̵��� �ִ� �Ÿ�: %.2f m\n", range);

    // 5) ���鿡 ���� �� �ӵ� ����
    double Vx_final = Vx0;
    double Vy_final = -Vy0;
    double V_final = sqrt(Vx_final * Vx_final + Vy_final * Vy_final);

    printf("5) ���鿡 ���� �� �ӵ�:\n");
    printf("   Vx = %.2f m/s, Vy = %.2f m/s\n", Vx_final, Vy_final);
    printf("   �ӵ� ���� ũ�� V = %.2f m/s\n", V_final);

    return 0;
}
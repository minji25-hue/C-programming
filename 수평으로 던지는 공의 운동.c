#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
// 중력가속도
#define G 9.8
#define DEG_TO_RAD(angle) ((angle) * M_PI / 180.0)
#define RAD_TO_DEG(angle) ((angle) * 180.0 / M_PI)

int main() {
    double speed, angleDeg;
    double Vx0, Vy0;

    // 입력
    printf("발사 속도 (m/s)를 입력하세요: ");
    scanf_s("%lf", &speed);

    printf("발사 각도 (도)를 입력하세요: ");
    scanf_s("%lf", &angleDeg);

    // 각도를 라디안으로 변환
    double angleRad = DEG_TO_RAD(angleDeg);

    // 1) x, y 방향의 초기속도
    Vx0 = speed * cos(angleRad);
    Vy0 = speed * sin(angleRad);
    printf("\n1) 초기 속도 성분: Vx0 = %.2f m/s, Vy0 = %.2f m/s\n", Vx0, Vy0);

    // 2) 최고점의 높이
    double h_max = (Vy0 * Vy0) / (2 * G);
    printf("2) 최고점의 높이: %.2f m\n", h_max);

    // 3) 최고점 도달 시간
    double t_peak = Vy0 / G;
    printf("3) 최고점 도달 시간: %.2f s\n", t_peak);

    // 4) 수평으로 이동한 최대 거리
    double total_time = 2 * t_peak;
    double range = Vx0 * total_time;
    printf("4) 수평으로 이동한 최대 거리: %.2f m\n", range);

    // 5) 지면에 닿을 때 속도 성분
    double Vx_final = Vx0;
    double Vy_final = -Vy0;
    double V_final = sqrt(Vx_final * Vx_final + Vy_final * Vy_final);

    printf("5) 지면에 닿을 때 속도:\n");
    printf("   Vx = %.2f m/s, Vy = %.2f m/s\n", Vx_final, Vy_final);
    printf("   속도 벡터 크기 V = %.2f m/s\n", V_final);

    return 0;
}
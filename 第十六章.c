#include <stdio.h>
#define HARMONIC_MEAN(x, y) (2.0 * (x) * (y)) / ((x) + (y))
int main() {
    double a, b, result;
    printf("请输入第一个正数 a: ");
    scanf("%lf", &a);
    printf("请输入第二个正数 b: ");
    scanf("%lf", &b);
    result = HARMONIC_MEAN(a, b);
    printf("调和平均数 = %.2f\n", result);
    return 0;
}
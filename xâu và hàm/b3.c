#include <stdio.h>
#include <stdlib.h>

void f(double x, double y) {
    if (y == 0.0) {
        printf("Phep chia khong thuc hien duoc");
        return;
    }
    printf("%.4lf", x/y);
}

int main()
{
    double a, b;
    scanf("%lf%lf", &a, &b);
    f(a,b);
    return 0;
}

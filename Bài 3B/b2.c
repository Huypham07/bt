#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n > 10 || n < 1) {
        printf("Khong dung so phan tu");
        return 0;
    }

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    double avg = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 5 == 0) {
            count++;
            avg += a[i];
        }
    }
    if (count > 0) {
        avg = avg / count;
        printf("%.2lf", avg);
    } else {
        printf("Khong co phan tu chia het cho 5");
    }

    return 0;
}

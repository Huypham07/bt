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

    int a[n], check = 0;
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if (a[i] > 7 && a[i] < 20) {
            check = 1;
        }
    }

    if (check == 0) {
        printf("Khong co");
	return 0;
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if ((a[j] > 7 && a[j] < 20) && (a[j + 1] > 7 && a[j + 1] < 20)) {
                // Chỉ hoán đổi giá trị nếu cả hai số đều nằm trong khoảng (7, 20)
                if (a[j] > a[j + 1]) {
                    int temp = a[j];
                    a[j] = a[j+1];
                    a[j+1] = temp;
                }
            }
        }
    }

    for (int i = 0; i < n; i++) {
        if (a[i] > 7 && a[i] < 20) {
            printf("%d ", a[i]);
        }
    }
    return 0;
}

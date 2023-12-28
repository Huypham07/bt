#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n > 10) {
        printf("size of array is invalid");
        return 0;
    }

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int min = a[0];
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
        }
    }
    printf("min of array is: %d\n", min);
    printf("index of numbers equal to min is: ");
    for (int i = 0; i < n; i++) {
        if (a[i] == min) {
            printf("%d ", i);
        }
    }

    return 0;
}

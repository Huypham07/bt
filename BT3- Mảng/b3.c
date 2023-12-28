#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n > 10 || n < 3) {
        printf("size of array is invalid");
        return 0;
    }

    double a[n];

    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }

    int ans = 0;

    for (int i = 1; i < n-1; i++) {
        if (a[i] == (a[i-1] + a[i+1])/2) {
            ans++;
        }
    }
    printf("%d", ans);
    return 0;
}

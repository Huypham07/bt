#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    if (n > 10) {
        printf("size_max is 10");
        return 0;
    }

    int a[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // ý 1
    int sum = 0;
    long int product = 1;
    for (int i = 0; i < n; i++) {
        sum += a[i];
        product *= a[i];
    }
    printf("Sum is: %d\nProduct is: %ld\n", sum, product);

    // ý 2
    double avg = 0;
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 3 == 0 && a[i] > 10) {
            count++;
            avg += a[i];
        }
    }
    if (count > 0) {
        avg = avg / count;
        printf("On-demand average is: %.2lf\n", avg);
    } else {
        printf("Can't find on-demand average\n");
    }
    //ý 3
    count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] >= 100 && a[i] < 1000) {
            count++;
        }
    }

    printf("%d Numbers in [100, 1000)", count);

    return 0;
}

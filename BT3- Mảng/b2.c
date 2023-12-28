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

    int ans;
    int have_even_num = 0;

    for (int i = 1; i < n; i++) {
        if(have_even_num == 0) {//tìm số chẵn đầu tiên trong dãy
            if(a[i] % 2 == 0) {
                ans = a[i];
                have_even_num = 1;
            }
        } else {//tìm được rồi thì mới dùng nó để so sánh
            if(a[i] % 2 == 0 && a[i] < ans) {
                ans = a[i];
                have_even_num = 1;
            }
        }
    }

    if(have_even_num) {
        printf("%d", ans);
    } else {
        printf("Day khong co so chan");
    }

    return 0;
}

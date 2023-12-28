//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    if (n > 10 || n < 1) {
//        printf("size of array is invalid");
//        return 0;
//    }
//
//    int a[n];
//    for (int i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//
//    int k;
//    scanf("%d", &k);
//
//    int max = a[0];
//    for (int i = 1; i < n; i++) {
//        if (a[i] > max) {
//            max = a[i];
//        }
//    }
//
//    for (int i = 0; i < n; i++) {
//        if (max - a[i] < k) {
//            printf("%d ", i);
//            break;
//        }
//    }
//
//    return 0;
//}

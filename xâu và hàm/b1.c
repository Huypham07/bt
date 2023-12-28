#include <stdio.h>
#include <stdlib.h>
#include <string.h> // thư viện làm việc với chuỗi

int main()
{
    char s[100];// khai báo chuỗi dưới dạng mảng các ký tự
    scanf("%s", s);// %s đại diện cho chuỗi, %c đại diện cho 1 kí tự

    //hàm gets(s) sẽ tương tự với scanf("%s", s)
    // có thể dùng hàm puts(s) để in xâu

    int digits = 0, letters = 0;
    int length = strlen(s);

    for (int i = 0; i < length; i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            digits++;
        } else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')) {
            letters++;
        }
    }
    int ans;
    if (digits == letters) {
        ans = 0;
    } else if (digits < letters) {
        ans = 1;
    } else {
        ans = 2;
    }

    printf("%d", ans);
    return 0;
}

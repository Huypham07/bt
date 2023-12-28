#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    char s[16];
    scanf("%s", s);// %s đại diện cho chuỗi, %c đại diện cho 1 kí tự
    int length = strlen(s);
    int ans = 0, j = 0;

    if (s[0] == '0') {
        for (int i = length - 1; i >= 1; i--) {
            ans += (s[i] - '0') * pow(2, j);
            // s[i] là 1 kí tự char thự chất là 1 số quy ra từ mã ascii, ký tự '0' trong ascii là 48
            // s[i] - '0' để quy đổi s[i] từ chữ sang số, trong ví dụ này chuyển s[i] từ '1' thành 1 hoặc '0' thành '0'
            j++;
        }
    } else {
        // nếu là số âm thì có 3 chuẩn, chọn 1 trong các chuẩn
        // chuẩn bit dấu:
        for (int i = length - 1; i >= 1; i--) {
            ans += (s[i] - '0') * pow(2, j);
            j++;
        }
        ans = - ans;

        // chuẩn bù 1
        for (int i = 0; i < length; i++) {
            if (s[i] == '0') {
                s[i] = '1';
            } else {
                s[i] = '0';
            }
        }

        for (int i = length - 1; i >= 1; i--) {
            ans += (s[i] - '0') * pow(2, j);
            j++;
        }

        ans = -ans;
        // chuẩn bù 2
        int carry = 1;
        for (int i = length - 1; i >= 0; i--) {
            int temp = s[i] - '0';
            if (temp - carry == 0) {
                s[i] = '0';
                carry = 0;
                break;
            } else {
                s[i] = '1';
            }
        }

        for (int i = 0; i < length; i++) {
            if (s[i] == '0') {
                s[i] = '1';
            } else {
                s[i] = '0';
            }
        }

        for (int i = length - 1; i >= 1; i--) {
            ans += (s[i] - '0') * pow(2, j);
            j++;
        }
        ans = -ans;
    }

    printf("%d", ans);
    return 0;
}

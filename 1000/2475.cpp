//210704
//백준 2475번 공유기 설치 (브론즈 5)
//https://www.acmicpc.net/problem/2475


#include <stdio.h>

int main() {
    int a, b, c, d, e, num;
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    num = (a * a + b * b + c * c + d * d + e * e) % 10;
    printf("%d", num);

    return 0;
}
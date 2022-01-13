//210704
//백준 2742번 기찍 N (브론즈 3)
//https://www.acmicpc.net/problem/2742


#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("%d \n", n - i);
    }

    return 0;
}
//210704
//���� 2742�� ���� N (����� 3)
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
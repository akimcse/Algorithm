//210919
//백준 2609번 최대공약수와 최소공배수 (실버 5)
//https://www.acmicpc.net/problem/2609


#include <stdio.h>
int gcd(int a, int b) { // 최대공약수 함수(재귀함수) -> 유클리드 호제법
    if (b == 0) {
        return a;
    }
    else {
        gcd(b, a % b);
    }
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", gcd(a, b));
    printf("%d", (a * b) / gcd(a, b));  //두 수의 곱 = 두 수의 최대공약수와 최소공배수의 곱
    return 0;
}
//210919
//백준 11050번 이항계수1 (브론즈 1)
//https://www.acmicpc.net/problem/11050


#include <stdio.h>
int fact(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return(n * fact(n - 1));
    }
}

int binomial(int n, int k) {
    if ((k == 0) || (k == n)) {
        return 1;
    }
    else {
        return(fact(n) / (fact(n - k) * fact(k)));
    }
}

int main() {
    int n, k, result;
    scanf("%d", &n);
    scanf("%d", &k);

    result = binomial(n, k);
    printf("%d", result);
}
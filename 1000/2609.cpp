//210919
//���� 2609�� �ִ������� �ּҰ���� (�ǹ� 5)
//https://www.acmicpc.net/problem/2609


#include <stdio.h>
int gcd(int a, int b) { // �ִ����� �Լ�(����Լ�) -> ��Ŭ���� ȣ����
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
    printf("%d", (a * b) / gcd(a, b));  //�� ���� �� = �� ���� �ִ������� �ּҰ������ ��
    return 0;
}
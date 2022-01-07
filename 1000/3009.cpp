//210623
//백준 3009번 네번째 점 (브론즈 3)
//https://www.acmicpc.net/problem/3009


#include <stdio.h>

int main() {
	int x1, y1, x2, y2, x3, y3;
	int x4 = 0, y4 = 0;
	scanf("%d %d", &x1, &y1);
	scanf("%d %d", &x2, &y2);
	scanf("%d %d", &x3, &y3);

	if (x1 == x2) {
		x4 = x3;
	}
	else if (x2 == x3) {
		x4 = x1;
	}
	else if (x3 == x1) {
		x4 = x2;
	}

	if (y1 == y2) {
		y4 = y3;
	}
	else if (y2 == y3) {
		y4 = y1;
	}
	else if (y3 == y1) {
		y4 = y2;
	}

	printf("%d %d", x4, y4);
	return 0;
}
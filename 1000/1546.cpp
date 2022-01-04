//210822
//백준 1546번 평균 (브론즈 1)
//https://www.acmicpc.net/problem/1546


#include <stdio.h>

int main() {
	int max, n, i;
	float grade[1000], sum, avg;

	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		scanf("%f", &grade[i]);
	}

	max = grade[0];
	for (i = 0; i < n; i++) {
		if (grade[i] > max) {
			max = grade[i];
		}
	}

	for (i = 0; i < n; i++) {
		grade[i] = grade[i] / max * 100;
		sum += grade[i];
	}

	avg = sum / n;

	printf("%f", avg);

	return 0;
}
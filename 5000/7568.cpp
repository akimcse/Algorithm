//211102
//백준 7568번 덩치 (실버 5)
//https://www.acmicpc.net/problem/7568


#include <iostream>
using namespace std;

int N, i, j, x[50], y[50], ranking[50];

int main() {
	cin >> N;

	for (i = 0; i < N; i++) {
		cin >> x[i] >> y[i];
		ranking[i] = 1;
	}

	for (i = 0; i < N; i++) {
		for (j = 0; j < N; j++) {
			if (x[i] < x[j] && y[i] < y[j]) {
				ranking[i]++;
			}
		}
	}

	for (i = 0; i < N; i++) {
		cout << ranking[i] << " ";
	}

	return 0;
}
//211103
//���� 1182�� �κ� ������ �� (�ǹ� 2)
//https://www.acmicpc.net/problem/1182


#include <iostream>
using namespace std;

int N, S, i, seq[20], sum, num;

void subseq(int i, int sum) {
	sum += seq[i];

	if (i == N) {
		return;
	}

	if (sum == S) {
		num++;
	}

	subseq(i + 1, sum - seq[i]);
	subseq(i + 1, sum);
}

int main() {
	cin >> N >> S;

	for (i = 0; i < N; i++) {
		cin >> seq[i];
	}

	subseq(0, 0);
	cout << num;
	return 0;
}
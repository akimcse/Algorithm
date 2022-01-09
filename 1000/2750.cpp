//220109
//백준 2750번 수 정렬하기 (브론즈 1)
//https://www.acmicpc.net/problem/2750


#include <iostream>
#include <vector>
using namespace std;

int main() {
	int N;
	vector<int> num;

	//입력
	cin >> N;
	num.assign(N, 0);
	for (int i = 0; i < N; i++) {
		cin >> num[i];
	}

	//버블 정렬
	for (int i = 0; i < N; i++) {
		bool flag = true;
		for (int j = 1; j < N - i; j++) {
			if (num[j - 1] > num[j]) {
				flag = false;
				swap(num[j - 1], num[j]);
			}
		}
	}

	//출력
	for (int i = 0; i < N; i++) {
		cout << num[i] << "\n";
	}
	return 0;
}
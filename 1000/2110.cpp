//211125
//백준 2110번 공유기 설치 (실버 1)
//https://www.acmicpc.net/problem/2110


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int n, c;
vector<int> home;

int router(int start, int end) {
	int i, result = 0;

	while (start <= end) {
		int mid = (start + end) / 2;
		int first = home[0];
		int num = 1;
		for (i = 1; i < n; i++) {
			if (home[i] - first >= mid) {
				first = home[i];
				num++;
			}
		}
		if (num >= c) {
			result = mid;
			start = mid + 1;
		}
		else {
			end = mid - 1;
		}
	}
	return result;
}

int main() {
	int temp, start, end;
	cin >> n >> c;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		home.push_back(temp);
		end = max(temp, end);
	}

	sort(home.begin(), home.end());

	cout << router(1, end);

	return 0;
}
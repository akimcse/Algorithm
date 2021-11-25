//211125
//백준 2512번 예산 (실버 3)
//https://www.acmicpc.net/problem/2512


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

vector<int> budget;
int n, m;

int maxBudget(int minimum, int maximum) {
	int i;
	long long sum;
	int mid = (minimum + maximum) / 2;

	while (minimum <= maximum) {
		sum = 0;

		for (i = 0; i < n; i++) {
			sum += min(budget[i], mid);
		}

		if (sum < m) {
			minimum = mid + 1;
		}
		else if (sum > m) {
			maximum = mid - 1;
		}
		else {
			return mid;
		}

		mid = (minimum + maximum) / 2;
	}
	return mid;
}

int main() {
	int temp, maximum = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> temp;
		budget.push_back(temp);
		maximum = max(temp, maximum);
	}
	cin >> m;

	cout << maxBudget(0, maximum);

	return 0;
}

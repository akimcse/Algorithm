//211027
//백준 1158번 요세푸스 문제 (실버 5)
//https://www.acmicpc.net/problem/1158

#include <iostream>	
#include <queue>
using namespace std;

int main() {
	int n, k, i;
	queue<int> q;

	cin >> n >> k;

	for (i = 1; i <= n; i++) {
		q.push(i);
	}

	cout << "<";
	while (q.size() > 1) {
		for (i = 1; i < k; i++) {
			q.push(q.front());
			q.pop();
		}
		cout << q.front() << ", ";
		q.pop();
	}
	cout << q.front() << ">";

	return 0;
}
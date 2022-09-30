#include <iostream>
#include <algorithm>
#include <vector>
#include <string.h>
#include <stack>
#include <queue>

using namespace std;

//define
#define MAX_INDEX 10001
//global var
int n;
bool check[101];
vector<int> pc[101];
int cnt;
//func area
void bfs(int start) {
	queue<int> q;
	q.push(start);
	check[start] = true;

	while (!q.empty()) {
		int x = q.front();
		q.pop();

		for (auto& i : pc[x]) {
			if (!check[i]) {
				q.push(i);
				check[i] = true;
				cnt++;
			}
		}
	}
}
int main() {
	cin >> n;
	int t = 0;
	cin >> t;
	while (t--) {
		int n1, n2;
		cin >> n1 >> n2;

		pc[n1].push_back(n2);
		pc[n2].push_back(n1);
	}

	bfs(1);

	cout << cnt;

	return 0;
}
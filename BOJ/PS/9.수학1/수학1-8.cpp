#include <iostream>

using namespace std;

int distance(int x, int y) {
	int dist = y - x - 2;
	int k1 = 1;
	int k2;
}

int main() {
	int T = 0;
	cin >> T;
	int x, y;
	for (int i = 0; i < T; i++) {
		cin >> x >> y;
		cout << distance(x - 1, y - 1) + 2;
	}

	return 0;
}
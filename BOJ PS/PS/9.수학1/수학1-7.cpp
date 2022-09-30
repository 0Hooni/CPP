#include <iostream>

using namespace std;

int familyNum(int k, int n) {
	int room[15][15] = { 0 };
	for (int i = 0; i < 15; i++) {
		room[i][1] = 1;
		room[0][i] = i;
	}

	for (int i = 1; i < 15; i++) {
		for (int j = 2; j < 15; j++) {
			room[i][j] = room[i - 1][j] + room[i][j - 1];
		}
	}
	return room[k][n];
}

int main() {
	int T = 0;
	cin >> T;
	int k, n;
	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		cout << familyNum(k, n) << "\n";
	}
	return 0;
}

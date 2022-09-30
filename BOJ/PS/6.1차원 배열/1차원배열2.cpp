#include <iostream>

using namespace std;

int main() {
	int num[9];
	int cnt = 0;
	
	for (int i = 0; i < 9; i++) {
		cin >> num[i];
	}

	int max = 0;

	for (int i = 0; i < 9; i++) {
		if (num[i] > max) {
			max = num[i];
		}
	}


	while (max != num[cnt]) {
		cnt++;
	}


	cout << max << "\n" << cnt + 1;

	return 0;
}

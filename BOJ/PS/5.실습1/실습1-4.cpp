#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;


	for (int i = 0; i < 2 * n - 1; i++) {
		if (i < n) {
			for (int j = 0; j <= i; j++) {
				cout << "*";
			}
		}
		else {
			for (int j = (2 * n) - (i + 1); j > 0; j--) {
				cout << "*";
			}
		}

		cout << "\n";
	}

	return 0;
}
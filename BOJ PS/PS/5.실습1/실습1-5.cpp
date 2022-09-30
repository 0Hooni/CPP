#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	int n_ = 2 * n - 1;

	for (int i = 0; i < n_; i++) {
		if (i < n) {
			for (int j = 0; j < i; j++) {
				cout << " ";
			}
			for (int j = 0; j < n_ - 2 * i; j++) {
				cout << "*";
			}
		}
		else {
			for (int j = 1; j < n_ - i; j++) {
				cout << " ";
			}
			for (int j = 0; j < 2 * (i + 1) - n_; j++) {
				cout << "*";
			}
		}
		cout << "\n";
	}

	return 0;
}
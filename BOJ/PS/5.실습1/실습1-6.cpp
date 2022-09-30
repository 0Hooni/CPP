#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;


	for (int i = 0; i < 2 * n; i++) {
		if (i % 2 == 0) {
			for (int j = 0; j < n; j++) {
				if (j % 2 == 0)
					cout << "*";
				else
					cout << " ";
			}
		}

		else {
			for (int j = 0; j < n; j++) {
				if (j % 2 != 0)
					cout << "*";
				else
					cout << " ";
			}
		}

		cout << "\n";
	}

	return 0;
}

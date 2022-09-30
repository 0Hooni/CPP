#include <iostream>

using namespace std;

int main() {
	int num[3];

	for (int i = 0; i < 3; i++) {
		cin >> num[i];
	}

	int max = num[0], max_ = 0;

	for (int i = 1; i < 3; i++) {
		if (num[i] >= max) {
			max_ = max;
			max = num[i];
		}
		else if (num[i] < max && max_ < num[i])
			max_ = num[i];

	}

	cout << max_;

	return 0;
}

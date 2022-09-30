#include <iostream>

using namespace std;

int main() {
	int student[5] = { 0 };
	int sum = 0;

	for (int i = 0; i < 5; i++) {
		cin >> student[i];
		if (student[i] > 40)
			sum += student[i];
		else
			sum += 40;
	}

	cout << sum / 5;

	return 0;
}
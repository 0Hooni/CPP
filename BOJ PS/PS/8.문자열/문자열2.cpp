#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	char* num = new char[n];
	int sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> num[i];
		sum += (num[i] - '0');
	}

	cout << sum;

	return 0;
}
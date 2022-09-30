#include <iostream>

using namespace std;

int main() {
	int n = 0, n_ = 0;
	cin >> n;

	int res = (n % 10) + (n / 10);
	n_ = (n % 10 * 10) + res % 10;

	int T = 1;
	while (n != n_) {
		res = (n_ % 10) + (n_ / 10);
		n_ = (n_ % 10 * 10) + res % 10;
		T++;
	}

	cout << T;

	return 0;
}

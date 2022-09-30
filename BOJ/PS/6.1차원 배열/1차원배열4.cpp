#include <iostream>

using namespace std;

int main() {
	int n;
	int cnt[42] = { 0 };
	int res = 0;
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		cin >> n;
		res = n % 42;
		cnt[res]++;
	}
	for (int i = 0; i < 42; i++) {
		if (cnt[i] > 0)
			sum++;
	}

	cout << sum;

	return 0;
}
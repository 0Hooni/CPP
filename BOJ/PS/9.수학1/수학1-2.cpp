#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int bag = 0;
	int count_5 = n / 5;
	int count_3 = (n - count_5 * 5) / 3;
	int sum = count_5 * 5 + count_3 * 3;

	while (n != sum) {
		sum = count_5 * 5 + count_3 * 3;
		if (sum < n) count_3++;
		else if (n == sum) break;
		else count_5--;

		if (sum < 0 || count_5 < 0) {
			cout << -1;
			return 0;
		}
	}

	bag = count_5 + count_3;

	cout << bag;

	return 0;
}

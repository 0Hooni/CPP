#include <iostream>

using namespace std;

int main() {
	int a, b, c = 0;
	cin >> a >> b >> c;
	int res = a * b * c;
	int res_ = 0;

	int digit[10];
	for (int i = 0; i < 10; i++) {
		digit[i] = -1;
	}

	int cnt_digit[10] = { 0 };

	for (int i = 0; i < 10; i++) {
		digit[i] = res % 10;
		res_ = res;
		res = res / 10;
		cnt_digit[digit[i]]++;
		if (res == 0) {
			break;
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << cnt_digit[i] << "\n";
	}

	return 0;
}

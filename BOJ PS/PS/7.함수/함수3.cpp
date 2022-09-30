#include <iostream>
#include <cmath>

using namespace std;

bool hanNum(int x) {
	int length = (int)log10(x) + 1;
	int* num = new int[length];

	if (x == 1000) return false;
	else if (length <= 2) return true;
	else  {
		for (int i = 0; i < length; i++) {
			num[i] = x % 10;
			x = x / 10;
		}
		if (num[2] - num[1] == num[1] - num[0]) return true;
		else return false;
	}
}

int main() {
	int n = 0;
	int cnt = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		if (hanNum(i) == true) cnt++;
	}

	cout << cnt;
	return 0;
}

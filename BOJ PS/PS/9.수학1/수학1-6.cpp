#include <iostream>

using namespace std;

int roomNum(int h, int w, int n) {
	if (n % h == 0) return h * 100 + (n / h);
	else return n % h * 100 + (n / h + 1);
}

int main() {
	int t = 0;
	cin >> t;
	int h = 0, w = 0, n = 0;
	
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		cout << roomNum(h, w, n) << "\n";
	}
	
	return 0;
}

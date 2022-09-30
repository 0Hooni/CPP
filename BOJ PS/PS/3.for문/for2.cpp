#include <iostream>

using namespace std;

int main() {
	int T = 0;
	cin >> T;
	
	int a = 0, b = 0;

	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		cout << a + b << endl;
		a = 0, b = 0;
	}

	return 0;
}
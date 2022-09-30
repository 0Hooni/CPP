#include <iostream>

using namespace std;

int main() {
	int a = 0, b = 0;
	int T;

	cin >> T;

	for (int i = 1; i <= T; i++) {
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b
			<< " = " << a + b << "\n";
	}

	return 0;
}

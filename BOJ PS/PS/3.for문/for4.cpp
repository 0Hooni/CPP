#include <iostream>

using namespace std;

int main() {
	cin.tie(NULL);
	ios_base::sync_with_stdio(false); 

	int T = 0;
	cin >> T;

	int a = 0, b = 0;

	for (int i = 0; i < T; i++) {
		cin >> a >> b;
		cout << a + b << "\n";
		a = 0, b = 0;
	}

	return 0;
}

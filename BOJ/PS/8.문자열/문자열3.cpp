#include <iostream>

using namespace std;

int main() {
	char wd[100] = { 0 };
	int apb[26] = { 0 };
	for (int i = 0; i < 26; i++) {
		apb[i] = -1;
	}
	cin >> wd;

	for (int i = 0; i < 100; i++) {
		if (wd[i] != 0 && apb[wd[i] - 97] == -1) {
			apb[wd[i] - 97] = i;
		}
	}

	for (int i = 0; i < 26; i++) {
		cout << apb[i] << " ";
	}

	return 0;
}
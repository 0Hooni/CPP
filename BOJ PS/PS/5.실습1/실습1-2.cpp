#include <iostream>

using namespace std;

int main() {
	int bugger[3] = { 0 };
	int drink[2] = { 0 };

	cin >> bugger[0];
	int bugger_low = bugger[0];
	for (int i = 1; i < 3; i++) {
		cin >> bugger[i];
		if (bugger[i] < bugger_low)
			bugger_low = bugger[i];
	}
	cin >> drink[0];
	int drink_low = drink[0];
	for (int i = 1; i < 2; i++) {
		cin >> drink[i];
		if (drink[i] < drink_low)
			drink_low = drink[i];
	}

	cout << bugger_low + drink_low - 50;
    
	return 0;
}

#include <iostream>
#include <string>

using namespace std;

int main() {
	int sum = 0;
	string address;
	cin >> address;
	int* num = new int[address.length()];

	for (int i = 0; i < address.length(); i++) {
		if (address[i] == 'A' || address[i] == 'B' || address[i] == 'C')
			num[i] = 2;
		if (address[i] == 'D' || address[i] == 'E' || address[i] == 'F')
			num[i] = 3;
		if (address[i] == 'G' || address[i] == 'H' || address[i] == 'I')
			num[i] = 4;
		if (address[i] == 'J' || address[i] == 'K' || address[i] == 'L')
			num[i] = 5;
		if (address[i] == 'M' || address[i] == 'N' || address[i] == 'O')
			num[i] = 6;
		if (address[i] == 'P' || address[i] == 'Q' || address[i] == 'R' || address[i] == 'S')
			num[i] = 7;
		if (address[i] == 'T' || address[i] == 'U' || address[i] == 'V')
			num[i] = 8;
		if (address[i] == 'W' || address[i] == 'X' || address[i] == 'Y' || address[i] == 'Z')
			num[i] = 9;

		sum += num[i];
	}

	cout << sum + address.length();

	return 0;
}
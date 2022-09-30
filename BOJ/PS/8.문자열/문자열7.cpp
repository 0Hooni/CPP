#include <iostream>
#include <string>

using namespace std;

int main() {
	string num1 = { 0 };
	string num2 = { 0 };

	cin >> num1 >> num2;

	char sw;
	sw = num1[0];
	num1[0] = num1[2];
	num1[2] = sw;

	sw = num2[0];
	num2[0] = num2[2];
	num2[2] = sw;

	if (num1 > num2)
		cout << num1;
	else
		cout << num2;

	return 0;
}

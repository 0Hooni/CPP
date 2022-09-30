#include <iostream>

using namespace std;

int main() {
	int hour; //½Ã
	int min; //ºÐ

	cin >> hour >> min;
	if (min >= 45)
		cout << hour << " " << min - 45;
	else
		if (hour != 0)
			cout << hour - 1 << " " << min + 15;
		else
			cout << 24 - 1 << " " << min + 15;
	return 0;
}
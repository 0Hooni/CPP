#include <iostream>

using namespace std;

int main() {
	int a = 0;
	cin >> a;
	char grade = 'A';
	int ASC = (int)grade;

	for (int score = 90; score >= 60; score -= 10) {
		if (a >= score) {
			cout << (char)ASC;
			break;
		}
		ASC += 1;
	}

	if (a < 60) {
		cout << "F";
	}

	return 0;
}

#include <iostream>

using namespace std;

int selfNum(int x) {

}

int addNum(int n) {
	int num[4];
	int sum = 0;
	for (int i = 0; i < 4; i++) {
		num[i] = n % 10;
		n = n / 10;
		sum += num[i];
	}
	return sum;
}

int main() {
	for (int i = 0; i < 10000; i++) {
		if (selfNum(i) == ) {
			cout << i << "\n";
		}
	}

	return 0;
}

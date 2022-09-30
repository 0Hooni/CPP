#include <iostream>
#include <limits.h>

using namespace std;

int main() {
	int n = 0;
	cin >> n;

	int* ptr = { 0 };
	for (int i = 0; i < n; i++) {
		int a = 0;
		cin >> a;
		*(ptr+i) = a;
	}
	int max = INT_MIN;
	int min = INT_MAX;

	for (int i = 0; i < n; i++) {
		if (*(ptr + i) > max)
			max = *(ptr + i);
		if (*(ptr + i) < min)
			min = *(ptr + i);
	}

	cout << max << " " << min;

	return 0;
}


#include <iostream>

using namespace std;

int main() {
	int n = 0, x = 0;
	cin >> n >> x;

	int* arr;
	arr = new int[n];

	int res;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < n; i++) {
		if (arr[i] < x)
			cout << arr[i] << " ";
	}

	return 0;

}
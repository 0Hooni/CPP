#include <iostream>

using namespace std;

int main() {
	int n;
	cin >> n;
	double* score = new double[n];
	double max = 0;
	double sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> score[i];
		if (score[i] > max)
			max = score[i];
	}

	for (int i = 0; i < n; i++) {
		score[i] = (score[i] / max) * 100;
		sum += score[i];
	}

	double Ex = sum / n;
	cout << Ex;

	return 0;
}
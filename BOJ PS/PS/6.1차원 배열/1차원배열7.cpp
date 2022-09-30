#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int student = 0;
		cin >> student;
		int* student_score = new int[student];
		int sum = 0;
		double Ex = 0;
		int student_cnt = 0;

		for (int j = 0; j < student; j++) {
			cin >> student_score[j];
			sum += student_score[j];
		}
		Ex = (double)sum / (double)student;

		for (int j = 0; j < student; j++) {
			if (student_score[j] > Ex)
				student_cnt++;
		}
		cout.precision(3);
		cout << fixed << ((double)student_cnt / (double)student) * 100 << "%\n";
	}

	return 0;
}
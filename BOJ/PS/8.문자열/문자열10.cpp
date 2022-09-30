#include <iostream>
#include <string>

using namespace std;

int main() {
	int T = 0;
	cin >> T;
	string* wd = new string[T];
	int cnt = 0;

	for (int i = 0; i < T; i++) {
		int apb[26] = { 0 };
		cin >> wd[i];
		string wd_ = wd[i];
		apb[(int)wd_[0] - 97]++;

		for (int j = 1; j < wd_.length(); j++) {
			if (wd_[j - 1] != wd_[j]) {
				apb[(int)wd_[j] - 97]++;
			}
		}

		int not_wd = 0;
		for (int j = 0; j < 26; j++) {
			if (apb[j] > 1)
				not_wd++;
		}

		if (not_wd == 0)
			cnt++;
	}

	cout << cnt;
	
}

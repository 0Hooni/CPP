#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;
	cin >> word;
	int cnt[26] = { 0 };
	int max_apb = 0;
	char check_point = 0;

	for (int i = 0; i < word.length(); i++) {
		if (word[i] > 96 && word[i] != NULL)
			word[i] -= ' ';
		cnt[word[i] - 65]++;
		if (cnt[word[i] - 65] > max_apb) {
			max_apb = cnt[word[i]-65];
			check_point = word[i];
		}
	}
	

	int cnt_max = 0;
	for (int i = 0; i < 26; i++) {
		if (cnt[i] == max_apb)
			cnt_max++;
	}
	if (cnt_max != 1) {
		cout << "?";
	}
	else
		cout << check_point;

	return 0;

}

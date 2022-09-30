#include <iostream>
#include <string>

using namespace std;

int main() {
	string cro_word;
	int cnt_word = 0;
	int cnt_length = 0;

	cin >> cro_word;

	for (int i = 1; i < cro_word.length(); i++) {
		if (cro_word[i] == '=') {
			if (cro_word[i - 1] == 'c' || cro_word[i - 1] == 'z' || cro_word[i - 1] == 's') {
				if (cro_word[i - 1] == 'z'&& i > 1 && cro_word[i - 2] == 'd') {
					cnt_word++;
					cnt_length += 3;
				}
				else {
					cnt_word++;
					cnt_length += 2;
				}
			}
		}

		else if (cro_word[i] == '-') {
			if (cro_word[i - 1] == 'c' || cro_word[i - 1] == 'd') {
				cnt_word++;
				cnt_length += 2;
			}
			else continue;
		}

		else if (cro_word[i] == 'j') {
			if (cro_word[i - 1] == 'l' || cro_word[i - 1] == 'n') {
				cnt_word++;
				cnt_length += 2;
			}
			else {
				cnt_word++;
				cnt_length++;
			}
		}
		else continue;
	}

	int less = 0;
	less = cro_word.length() - cnt_length;
	cout << cnt_word + less;

	return 0;
}
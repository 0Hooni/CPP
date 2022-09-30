#include <iostream>
#include <string>

using namespace std;

int main() {
	string word;
	getline(cin, word);
	bool space = true;

	int cnt = 0;

	for (int i = 0; i < word.length(); i++) {
		if (word[i] == ' ')
			space = true;
		else if (space) {
			space = false;
			cnt++;
		}
	}
	cout << cnt;

	return 0;
}

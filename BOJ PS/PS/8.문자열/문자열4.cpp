#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int length = 0;
		string word = "";
		cin >> length >> word;

		for (int j = 0; j < word.length(); j++) {
			for (int k = 0; k < length; k++) {
				cout << word[j];
			}
		}
		cout << "\n";
	}

	return 0;
}

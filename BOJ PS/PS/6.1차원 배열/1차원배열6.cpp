#include <iostream>
#include <string>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string ox;
		int score = 0;
		int o_stack = 1;
		cin >> ox;
		if (ox[0] == 'O') {
			score++;
			o_stack++;
		}
		for (int j = 1; j < ox.length(); j++) {
			if (ox[j] == 'X')
				o_stack = 1;
			else if (ox[j] == 'O' && ox[j - 1] == 'O') {
				score += o_stack;
				o_stack++;
			}
			else {
				score += o_stack;
				o_stack++;
			}
		}

		cout << score << "\n";
	}

	return 0;
}
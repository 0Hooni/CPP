#include <iostream>

using namespace std;

int main() {
	int n = 0;
	cin >> n;
	int room = 1;
	int room_max = 1;

	while (n > room_max) {
		room_max += room * 6;
		room++;	
	}

	cout << room;

	return 0;
}
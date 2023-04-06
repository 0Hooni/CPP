#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <cctype>

using namespace std;
void init() {
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// global variable
pair<int, int> fibo[41];

int main() {
    init();
    int T; cin >> T;
    fibo[0] = {1, 0};
    fibo[1] = {0, 1};

    for(int i=2; i<41; i++) {
        fibo[i].first = fibo[i-1].first + fibo[i-2].first;
        fibo[i].second = fibo[i-1].second + fibo[i-2].second;
    }

    while (T--) {
        int n; cin >> n;
        cout << fibo[n].first << " " << fibo[n].second << "\n";
    }
    
    return 0;
}
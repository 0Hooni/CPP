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

int main() {
    init();
    
    int n; cin >> n;
    int fibo[1000001];
    fibo[0] = 0;
    fibo[1] = 1;
    fibo[2] = 2;
    for(int i=3; i<=n; i++) {
        fibo[i] = (fibo[i-1] + fibo[i-2]) % 15746;
    }

    cout << fibo[n];

    return 0;
}

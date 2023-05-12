#include <iostream>
#include <vector>
#include <map>
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
int dp[100001];

int main() {
    init();
    
    int n; cin >> n;
    dp[1] = 3;
    dp[2] = 7;
    for(int i=3; i<=n; i++) {
        dp[i] = (dp[i-1] * 2 + dp[i-2]) % 9901;
    }

    cout << dp[n];

    return 0;
}
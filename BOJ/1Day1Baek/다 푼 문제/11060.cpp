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
vector<int> A;
int dp[1001];

int main() {
    init();

    memset(dp, -1, sizeof(dp));
    dp[0] = 0;
    int n; cin >> n;

    for(int i=0; i < n; i++) {
        int tmp; cin >> tmp;
        A.push_back(tmp);
    }

    queue<int> q;
    q.push(0);  // 출발 지점의 idx 넣어주기

    while (!q.empty()) {
        int idx = q.front();
        int maxJump = A[idx];
        q.pop();
        
        int start = min(idx + maxJump, n-1);
        for(int i = start; i > idx; i--) {
            if(dp[i] == -1) {
                dp[i] = dp[idx] + 1;
                q.push(i);
            }
        }
    }
    
    cout << dp[n-1];
    return 0;
}
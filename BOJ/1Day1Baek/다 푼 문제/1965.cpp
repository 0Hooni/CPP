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
int dp[1001];
vector<int> boxSize;

int main() {
    init();
    // 이 문제 가장 긴 증가하는 부분수열이랑 같은 문제
    // 그 문제 먼저 풀면 해결 될 일
    int n;
    cin >> n;

    int res = 0;
    for(int i=0; i<n; i++) {
        int tmp;
        cin >> tmp;
        boxSize.push_back(tmp);
        int dpMax = 0;

        for(int j=0; j < boxSize.size(); j++) {
            if(boxSize[i] > boxSize[j]) {
                if(dpMax < dp[j]) {
                    dpMax = dp[j];
                }
            }
        }
        dp[i] = dpMax + 1;
        res = max(res, dp[i]);    
    }
    
    cout << res;
    
    return 0;
}
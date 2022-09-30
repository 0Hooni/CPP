#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <math.h>
#include <utility>
#include <set>
#include <cctype>
using namespace std;
void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int dp[10001];
int main(){
    init();
    int n; cin >> n;
    memset(dp, 0, sizeof(dp));
    for(int i=1; i<=n; i++){
        cin >> dp[i];
        for(int j=0; j<=i/2; j++){
            dp[i] = max(dp[i], dp[i-j] + dp[j]);
        }
    }
    cout << dp[n];
    return 0;
}

/*
 * dp[i] -> i를 조합하는 모든 dp중에 가장 큰 dp
 * 그 이전이 그 걸 만드는 최대의 경우의 수니까 dp처럼 풀이가 가능해짐
 */

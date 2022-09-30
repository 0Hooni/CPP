//문제번호 : 2579
#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;

//def area
#define MAX_INDEX 301
typedef long long ll;
//global var area
int a[MAX_INDEX];
ll dp[MAX_INDEX][2];   //0 : 이번 계단 안밟은, 1 : 이번 계단 밟음, 2 : 이전이랑 이번계단 둘 다
//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

int main() {
    init();
    int n;
    cin >> n;
    for(int i=0 ;i<n; i++) cin >> a[i];

    dp[0][0] = 0;
    dp[0][1] = a[0];
    for(int i=1; i<n-1; i++){
        dp[i][0] = max(dp[i-1][2],dp[i-1][1]);
        dp[i][1] = dp[i-1][0] + a[i];
        dp[i][2] = dp[i-1][1] + a[i];
    }

    dp[n-1][1] = dp[n-2][0] + a[n-1];
    dp[n-1][2] = dp[n-2][1] + a[n-1];

    ll res = max(dp[n-1][1], dp[n-1][2]);
    cout << res;

    return 0;
}

/*
 *  밟지 않았을때, 1연속, 2연속의 경우로 하여 각 case별 최대를 dp[i]에 넣어줌
 */

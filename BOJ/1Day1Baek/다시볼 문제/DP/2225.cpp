//문제번호 : 2225
#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;

//def area
#define MAX_INDEX 201
#define MOD 1000000000
typedef long long ll;
//global var area
ll dp[MAX_INDEX][MAX_INDEX];
//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

int main() {
    init();

    int n, k;
    cin >> n >> k;

    dp[0][0] = 1LL;
    for(int i=1; i<=k; i++)
        for(int j=0; j<=n; j++)
            for(int l=0; l<=j; l++){
                dp[i][j] += dp[i-1][j-l];
                dp[i][j] %= MOD;
            }

    cout << dp[k][n] << '\n';

    return 0;
}

/*
 * dp의 핵심은 top-down or down-top 으로 생각해야된다
 * n개의 항으로 합을 구하기
 * n-k개의 항으로 sum - i를 구하는 것 + k개의 항으로 i를 구하는것
 */

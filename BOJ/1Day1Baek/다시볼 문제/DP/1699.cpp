//문제번호 : 1699
#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;

//def area
#define MAX_INDEX 100001
typedef long long ll;
//global var area
int dp[MAX_INDEX];
//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

int main() {
    init();
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        dp[i] = i;  //전부 다 1로 표현한 경우
        for(int j=1; j*j <= i; j++)
            dp[i] = min(dp[i], dp[i-j*j]+1);
    }

    cout << dp[n];

    return 0;

}

/*
 * dp[i] = dp[j] + dp[k], j + k = i, dp는 최소 카운트?
 * 정석 : 맨 끝항이 n*n인 경우 dp[i] = dp[i-n*n] + 1
 *
 */

//문제번호 : 1912
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
int a[MAX_INDEX];
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

    for(int i=0; i<n;i++) cin >> a[i];

    dp[0] = a[0];
    for(int i=1; i<n; i++){
        dp[i] = max(dp[i-1] + a[i], a[i]);
    }

    int res = dp[0];
    for(int i=1; i<n; i++)
        res = max(dp[i], res);

    cout << res;
    return 0;
}

/*
 *  새롭게 시작한것과, 이전의 연속합 중 누가 더 큰지를 비교
 */

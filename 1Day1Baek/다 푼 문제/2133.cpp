//문제번호 : 2133
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
int dp[31];
//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

int main() {
    init();
    int n;
    cin >> n;
    dp[0] = 1;
    for(int i=2; i<=n; i++){
        dp[i] = 3*dp[i-2];
        for(int j=i-4; j>=0; j-=2){
            dp[i] += dp[j]*2;
        }
    }

    cout << dp[n];


    return 0;

}

/*
 * dp의 핵심은 top-down or down-top 으로 생각해야된다
 * 지금의 경우 i번째는 i-1 or i-2등과의 관계를 생각하면 결과가 나올것 같다.
 *
 */

//문제번호 : 11057
#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <algorithm>

using namespace std;
typedef long long ll;
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

//global var
#define mod 10007
ll dp[1001][10];
ll res[1001];

//function area

int main(){
    init();
    //code
    int n;
    cin >> n;
    for(int i= 0; i<10;i++)
        dp[1][i] = 1;

    for(int i = 2; i<=n; i++){
        for(int j=0; j<10; j++){
            for(int k=0; k<=j; k++){
                dp[i][j] += dp[i-1][k];
                dp[i][j] %= mod;
            }
        }
    }

    for(int i=0; i<10; i++)
        res[n] += dp[n][i];

    cout << res[n]%mod;
    //code
    return 0;
}

/*
 * 해결방안 고안
 * dp[i][j] : i 는 자리수, j는 마지막 수
 * dp[i][j] = 시그마 dp[i-1][0~j]
 * result[i] = dp[i][0~9]
 */

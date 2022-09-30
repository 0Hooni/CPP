//문제번호 : 10844
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
ll dp[101][10];
#define mod 1000000000
//function area

int main(){
    init();
    //code
    int N;
    cin >> N;
    for(int i = 1; i < 10; i++)
        dp[1][i] = 1;
    for(int i = 2; i <= N; i++){
        for(int j = 0; j < 10; j++){
            if(j-1 >= 0) dp[i][j] += dp[i-1][j-1];
            if(j+1 < 10) dp[i][j] += dp[i-1][j+1];
            dp[i][j] %= mod;
        }
    }
    ll res = 0;
    for(int i=0; i<10; i++) res += dp[N][i];
    res %= mod;

    cout << res;
    //code
    return 0;
}

/*
 *  dp[i][j] = dp[i-1][j-1] + dp[i-1][j+1]
 */

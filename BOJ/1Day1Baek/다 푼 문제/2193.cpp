#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <algorithm>


using namespace std;

long long dp[91];

void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}


int main(){
    init();

    int N;
    cin >> N;
    dp[1] = 1;
    dp[2] = 1;

    for(int i = 3; i <= N; i++){
        dp[i] = dp[i - 1] + dp[i - 2];
    }

    cout << dp[N] << '\n';
    return 0;
}

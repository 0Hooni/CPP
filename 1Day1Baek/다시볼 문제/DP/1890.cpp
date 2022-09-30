#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <stack>
#include <queue>
#include <utility>
#include <set>
using namespace std;
void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int board[200][200];
long long dp[200][200];

int main(){
    init();
    int n; cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++)
            cin >> board[i][j];
    }
    dp[0][0] = 1;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(dp[i][j] == 0 || board[i][j] == 0)
                continue;
            else{
                int jump = board[i][j];

                if(i+jump < n) dp[i+jump][j] += dp[i][j];
                if(j+jump < n) dp[i][j+jump] += dp[i][j];
            }
        }
    }
    cout << dp[n - 1][n - 1];

    return 0;
}

/*
 * 메모리 초과가 나는 풀이에 대한 고찰
 */

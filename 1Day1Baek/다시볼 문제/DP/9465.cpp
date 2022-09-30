//문제번호 : 9465
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
ll dp[100001][3];   //0 : 선택 안함, 1 : 1번줄, 2 : 2번줄
int card[100001][3];
//function area
#define max(a,b) (((a)>(b))?(a):(b))

int main(){
    init();
    //code
    int T;
    cin >> T;
    while(T--){
        int n;
        cin >> n;
        for(int i = 1; i <= 2; i++){
            for(int j=1; j<=n; j++)
                cin >> card[j][i];
        }

        dp[0][0] = dp[0][1] = dp[0][2] = 0;
        for(int i=1; i<=n; i++){
            dp[i][0] = max(dp[i-1][0], max(dp[i-1][1], dp[i-1][2]));
            dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + card[i][1];
            dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + card[i][2];
        }
        ll res = 0;
        for(int i=1; i<=n; i++){
            res = max(max(res, dp[i][0]), max(dp[i][1], dp[i][2]));
        }
        cout << res << "\n";
    }
    //code
    return 0;
}

/*
 * PS : 해당 라인에서 선택 안했을때, 윗줄 선택, 아래줄 선택 3가지로 나누어 생각
 * dp[i][0] = max(dp[i-1][0], 1, 2)
 * dp[i][1] = max(dp[i-1][0], dp[i-1][2]) + card[i][1]
 * dp[i][2] = max(dp[i-1][0], dp[i-1][1]) + card[i][2]
 * 세개중에 max값이 결과값
 */

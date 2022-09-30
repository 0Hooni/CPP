//문제번호 : 9461
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
ll dp[101] = {0, 1, 1, 1, 2, 2, 3, 4};
//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

int main() {
    init();
    int t;
    cin >> t;

    for(int i=8; i<=100; i++){
        dp[i] = dp[i-1] + dp[i-5];

    }
    while (t--){
        int k;
        cin >> k;
        cout << dp[k] << "\n";
    }


    return 0;

}

/*
 * dp의 핵심은 top-down or down-top 으로 생각해야된다
 * [i] = [i-1] + [i-5]
 */

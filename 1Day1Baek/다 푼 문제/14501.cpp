#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <utility>
#include <set>
using namespace std;
void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
vector<pair<int, int>> T;
int dp[20];

int main(){
    init();
    int t; cin >> t;
    T.push_back({0, 0});
    for(int i=1; i<=t; i++) {
        int day, pay;
        cin >> day >> pay;
        T.push_back({day, pay});
        for(int j=0; j<i; j++){
            if(T[j].first + j <= i && i + T[i].first <= t+1)
                dp[i] = max(dp[i], dp[j] + T[i].second);
        }
    }
    int res = 0;
    for(int i=0; i<=t; i++)
        res = max(res, dp[i]);

    cout << res;

    return 0;
}

/*
 */

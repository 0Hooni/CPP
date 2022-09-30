//문제번호 : 11055
#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;

//def area
#define MAX_INDEX 1001
typedef long long ll;
//global var area
ll a[MAX_INDEX];
ll dp[MAX_INDEX];
//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

int main() {
    init();
    int n;
    cin >> n;
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<n; i++){
        dp[i] = a[i];
        for(int j=0; j<i; j++)
            if(a[i]>a[j] && dp[i]<dp[j]+a[i])
                dp[i] = dp[j] + a[i];
    }
    ll _MAX = 0;
    for(int i=0; i<n; i++)
        _MAX = max(_MAX, dp[i]);

    cout << _MAX;
    return 0;
}

/*
 */

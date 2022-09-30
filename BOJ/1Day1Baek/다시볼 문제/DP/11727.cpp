//문제번호 : 11727
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
int dp[1001];
//function area
//int result(int n){
//    if(n == 1) return 1;
//    if(n == 2) return 3;
//    dp[n] = result(n-1)+ result(n-2) * 2;  //n-2에서 하나가 추가 발생
//
//    return dp[n] % 10007;
//} //시간 복잡도 : O(N^2)

int main(){
    init();
    //code
    int n;
    cin >> n;
    dp[0] = 1;
    dp[1] = 1;

    for(int i=2; i<=n; i++){
        dp[i] = dp[i-1] + dp[i-2] + dp[i-2];
        dp[i] %= 10007;
    }//시간 복잡도 : O(N)

    cout << dp[n];
    //code
    return 0;
}

/*
해결방법 -> 맨 마지막 타일을 채우는 방법은
 dp[n-2] + 2, dp[n - 1] * 2
 */

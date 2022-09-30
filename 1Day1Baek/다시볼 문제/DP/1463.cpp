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
int dp[1000001];
//function area
int result(int n){
    if(n == 1) return 0;
    if(dp[n] > 0) return dp[n];   //이미 계산된 값이 존재하면

    //총 세가지의 경우로 나누어 각각 task에 진입하여
    //각 task에서 구해진 값과 지금까지 구한 값의 최소를 비교
    // 1을 빼는것, 2로 나누는것, 3으로 나누는것 순으로 짧아질 확률이 낮기에 해당 순서로 진행
    dp[n] = result(n-1) + 1;    //1을 더하는게 빠른경우
    if(n%2 == 0){
        int temp = result(n/2) + 1;
        if(dp[n] > temp) dp[n] = temp;  //2로 나누는게 더 짧을 경우
    }
    if(n%3 == 0){
        int temp = result(n/3) + 1;
        if(dp[n] > temp) dp[n] = temp;
    }

    return dp[n];
}

int main(){
    init();
    //code
    int N;
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    cin >> N;

    cout << result(N);
    //code
    return 0;
}


/*
 문제의 핵심은 각 격우중 최소값을 구하려는 접근
 각 연산은 이전 최단연산의 + 1
 */

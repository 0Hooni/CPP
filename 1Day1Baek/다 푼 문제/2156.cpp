//문제번호 : 2156
#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;

//def area
#define MAX_INDEX 10001
//global var area
int juice[MAX_INDEX];
int sum[MAX_INDEX][3];  //0 : 이번에 안마심, 1:이번까지 연속 한잔 마심, 2: 이번까지 연속 두잔 마심
//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

int main() {
    init();
    int n;
    cin >> n;

    for(int i=1; i<=n; i++)
        cin >> juice[i];

    int res=0;

    sum[1][0] = 0;
    sum[1][1] = juice[1];
    sum[2][0] = max(sum[1][0], max(sum[1][1], sum[1][2]));
    sum[2][1] = sum[1][0] + juice[2];
    sum[2][2] = sum[1][1] + juice[2];

    for(int i=3; i<=n; i++){
        sum[i][0] = max(sum[i-1][0], max(sum[i-1][1], sum[i-1][2]));
        sum[i][1] = sum[i-1][0] + juice[i];
        sum[i][2] = sum[i-1][1] + juice[i];
    }

    res = max(sum[n][0], max(sum[n][1], sum[n][2]));
    cout << res;


    return 0;
}

/*
 * 이번에 안마시는경우, 이번이 1연속인 경우, 이번이 2연속인 경우
 * 세가지로 나누어 각 경우에서 최대값을 넘겨받음
 */

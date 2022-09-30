//문제번호 : 2004
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
//function area
ll func(int n, int x){
    int temp = 0;
    for(ll i = x; n/i >= 1; i *= x){
        temp += n/i;
    }
    return temp;
}
ll min(int a, int b){ return a>b?a:b; }

int main(){
    init();
    //code
    int n, r;
    cin >> n >> r;

    ll countTwo = 0;
    ll countFive = 0;

    countTwo = func(n, 2) - func(n - r, 2) - func(r, 2);
    countFive = func(n, 5) - func(n - r, 5) - func(r, 5);

    cout << min(countTwo, countFive);


    //code
    return 0;
}
/*
 * 조합 n!/(r!)*(n-r)!
 * n!에서 2,5의 짝의 수 - 분모의 짝의 수
 */

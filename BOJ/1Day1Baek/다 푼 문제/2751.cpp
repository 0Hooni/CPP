//문제번호 : 2751
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

int main(){
    init();
    //code
    ll n;
    cin >> n;
    vector<int> num(n);

    for(int i=0; i<n; i++)
        cin >> num[i];

    sort(num.begin(), num.end());

    for(int i=0; i<n; i++) cout << num[i] << '\n';
    //code
    return 0;
}
/*
 */

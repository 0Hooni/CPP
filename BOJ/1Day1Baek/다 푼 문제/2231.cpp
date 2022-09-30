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
int sumOfNum(int n){
    int res = 0;
    if(n<10) return n;
    else
        while (n != 0){
            res += n%10;
            n = n/10;
        }
    return res;
}
int main(){
    init();
    int n; cin >> n;
    for(int i=1; i<n; i++){
        if(i + sumOfNum(i) == n){
            cout << i;
            return 0;
        }
    }
    cout << "0";
    return 0;
}

/*
 *
 */

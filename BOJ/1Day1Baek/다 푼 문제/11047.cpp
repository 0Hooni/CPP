#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <string.h>
#include <queue>
#include <math.h>
using namespace std;
typedef long long ll;

void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main() {
    init();
    int n, price;
    cin >> n >> price;

    vector<int> coin;
    for(int i=0; i<n; i++){
        int tmp; cin >> tmp;
        coin.push_back(tmp);
    }
    int t=0;
    for(int i=n-1; i>=0; i--){
        if(price < coin[i]) continue;
        else{
            while (price >= coin[i]){
                price -= coin[i];
                t++;
            }

        }
    }
    cout << t;
    return 0;
}

/*
 *
 */

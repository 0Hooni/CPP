#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <math.h>
#include <utility>
#include <set>
#include <cctype>
using namespace std;
void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    init();
    int n = -1;

    bool isPrime[1000001];
    memset(isPrime, true, sizeof(isPrime));
    isPrime[2] = true;

    int i=2;
    while (i <= 1000){
        int k=2;
        while (i*k <= 1000000) isPrime[i*(k++)] = false;
        while (!isPrime[++i]);
    }

    while (1){
        cin >> n;
        if(!n) break;
        int j=2;
        while (j < n-j){
            if(isPrime[j] && isPrime[n-j])
                break;
            else{
                while (!isPrime[++j]);
            }
        }
        cout << n << " = " << j << " + " << n-j << "\n";
    }
    return 0;
}

/*
 */

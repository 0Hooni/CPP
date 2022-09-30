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

bool isPrime[100000001];

int main(){
    init();
    int n; cin >> n;
    memset(isPrime, true, sizeof(isPrime));

    // check prime num by era
    int i=2;
    while (i <= 10000){
        int k=2;
        while (i*k <= 100000000) isPrime[i*(k++)] = false;
        while (!isPrime[++i]);
    }
    isPrime[0] = false;
    isPrime[1] = false;

    bool isPelin = false;
    do {
        if(isPrime[n] && n/10 == 0) break;
        if(isPrime[n]) {
            string num = to_string(n);
            int digitSize = num.size();
            for(int j=0; j < digitSize/2; j++){
                if(num[j] == num[digitSize-j-1]) isPelin = true;
                else {
                    isPelin = false;
                    break;
                }
            }
        }

        if(!isPelin)
            while (!isPrime[++n]);
    } while (!isPelin);

    cout << n;
    return 0;
}

/*
 */

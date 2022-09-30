#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <utility>
#include <set>
using namespace std;
void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
long long fib[100];

int main(){
    init();
    int n; cin >> n;
    fib[0] = 0;
    fib[1] = 1;

    for(int i=2; i<=n; i++){
        fib[i] = fib[i-1] + fib[i-2];
    }

    cout << fib[n];

    return 0;
}

/*
 *
 */

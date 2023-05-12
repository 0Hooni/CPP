#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <cctype>

using namespace std;
void init() {
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

// global variable


int main() {
    init();
    int n; cin >> n;
    if(n%2 != 0) {
        cout << "SK";
    }
    else {
        cout << "CY";
    }
    
    return 0;
}

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
vector<int> tri[501];

int main() {
    init();
    int n;
    cin >> n;
    // 삼각형 정보 입력 받음
    for(int i=0; i<n; i++) {
        for(int j=0; j<=i; j++) {
            int tmp; cin >> tmp;
            tri[i].push_back(tmp);
        }
    }
    for(int i=n-2; i>=0; i--) {
        for(int j=0; j<=i; j++){
            tri[i][j] += max(tri[i+1][j], tri[i+1][j+1]);
        }
    }

    cout << tri[0][0];
    
    return 0;
}

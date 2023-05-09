#include <iostream>
#include <vector>
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
vector<int> weight;
vector<int> value;
int bag[101][100001];

int main() {
    init();

    int n, limitWeight; 
    cin >> n >> limitWeight;

    // 물건 번호와 인덱스를 일치시키기 위함
    weight.push_back(0);
    value.push_back(0);
    memset(bag, 0, sizeof(bag));

    // 물건의 정보를 저장
    for(int i=0; i<n; i++) {
        int w, v;
        cin >> w >> v;
        
        weight.push_back(w);
        value.push_back(v);
    }

    
     for(int w = 1; w <= limitWeight; w++) {
        for(int num = 1; num <= n; num++) {
            if(w - weight[num] >= 0) {
                bag[num][w] = max(bag[num-1][w], bag[num-1][w - weight[num]] + value[num]);
            }
            else {
                bag[num][w] = bag[num-1][w];
            }
        }
    }

    cout << bag[n][limitWeight];
    return 0;
}

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
int block[100001];

int main() {
    init();
    
    int n, k;
    cin >> n >> k;

    // 다음 위치는 x+1, x-1, 2x가 있다
    // k를 넘어간 뒤 뒤로가는게 빠를 수도 있다
    queue<int> q;
    q.push(n);
    memset(block, -1, sizeof(block));
    block[n] = 0;
    while (!q.empty()) {
        int cur = q.front();
        q.pop();
        int nextArr[] = {cur+1, cur-1, cur*2};

        int next = 0;
        for(int i=0; i<3; i++) {
            next = nextArr[i];
            if(0 <= next && next < 100001) {
                if(block[next] == -1) {
                    q.push(next);
                    block[next] = block[cur] + 1;
                }
            }
            else {
                continue;
            }

            if(next == k) {
                cout << block[next];
                return 0;
            }
        }
    }
    
    
    
    return 0;
}
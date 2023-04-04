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
vector<char> line;
int triple(int n) {
    int res = 1;
    for(int i=0; i<n; i++) {
        res = res * 3;
    }
    return res;
}
void divide(int frontIdx, int endIdx, int size, int turn) {
    if(turn == 0) {
        return;
    }

    size = size/3;

    for(int i=frontIdx+size; i <= endIdx-size; i++) {
        line[i] = ' ';
    }
    divide(frontIdx, (frontIdx+size-1), size, turn-1);
    divide((endIdx-size+1), endIdx, size, turn-1);
}

int main() {
    init();
    // 1. 분할하며 해당되는 인덱스에 false 처리하여 출력
    // 2. 최종 index의 규칙성을 함수로 규정하여 해당 index에 체크하며 출력
    // 3. 일단 쭉 그리고, 지워질 노드에 ' '로 지워줌
    // 확실한건 하나씩 있는지 체킹을 할 알고리즘은 필요없음
    // 3의 12승은 약 50만으로 그리 큰 수가 아님
    while (1) {
        int n; cin >> n;
        if(cin.eof() == true) { 
            break; 
        }
        int tripleResult = triple(n);
        for(int i=0; i<tripleResult; i++) {
            line.push_back('-');
        }
        divide(0, tripleResult-1, tripleResult, n);
        for(int i=0; i<tripleResult; i++) {
            cout << line[i];
        }
        cout << "\n";
    }
    

    return 0;
}
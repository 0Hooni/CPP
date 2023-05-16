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
int n, m;
int lab[8][8];  
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
int copydLab[8][8];
int labForBFS[8][8];
int res;

void copy(int target[8][8], int original[8][8]) {
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            target[i][j] = original[i][j];
        }
    }
}

void countSafeArea() {
    // 복사된 lab을 기준으로
    copy(labForBFS, copydLab);

    queue<pair<int, int>> q;

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(labForBFS[i][j] == 2) {
                q.push({i, j});
            }
        }
    }

    while(!q.empty()) {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int k=0; k<4; k++) {
            int nextX = x + dx[k];
            int nextY = y + dy[k];

            if((0 <= nextX && nextX < n) && (0 <= nextY && nextY < m)) {
                if(labForBFS[nextX][nextY] == 0) {
                    labForBFS[nextX][nextY] = 2;
                    q.push({nextX, nextY});
                }
            }
            else { continue; }
        }
    }

    int curRes = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(labForBFS[i][j] == 0) { curRes++; }
        }
    }

    res = max(res, curRes);
    
}
void selectEmpty(int cnt) {
    if(cnt == 3) {
        countSafeArea();
        return;
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(copydLab[i][j] == 0) {
                copydLab[i][j] = 1;
                selectEmpty(cnt+1);
                copydLab[i][j] = 0;
            }
        }
    }
}

int main() {
    init();
    cin >> n >> m;
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> lab[i][j];
        }
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            // 빈칸일 때
            if(lab[i][j] == 0) {
                copy(copydLab, lab);
                copydLab[i][j] = 1;
                selectEmpty(1);
                copydLab[i][j] = 0;
            }
        }
    }

    cout << res;
    return 0;
}

/*
주의점
- 주워진 n, m을 기준으로 인덱스가 벗어나지 않게 처리
- 사방으로 퍼짐 -> BFS
*/
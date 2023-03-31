#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <utility>

using namespace std;

vector<int> map[101];
bool isSink[101][101];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

int bfs(int rain, int size) {
    memset(isSink, false, sizeof(isSink));
    int res = 0;
    // rain 값 기준 잠기는 부분을 체크
    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            if(map[i][j] <= rain) {
                isSink[i][j] = true;
            }
        }
    }


    queue<pair<int, int>> q;

    for(int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            if(!isSink[i][j]) {
                q.push(make_pair(i, j));
                isSink[i][j] = true;

                while(!q.empty()) {
                    int x = q.front().first;
                    int y = q.front().second;
                    
                    q.pop();

                    for(int k=0; k<4; k++) {
                        int nextX = x + dx[k];
                        int nextY = y + dy[k];

                        if((0 <= nextX && nextX < size) && (0 <= nextY && nextY < size)) {
                            if(!isSink[nextX][nextY]) {
                                q.push({nextX, nextY});
                                isSink[nextX][nextY] = true;
                            }
                        }
                    }
                }

                res++;  // 탐색이 끝나면 영역의 갯수를 하나 늘려줌
            }
        }
    }
        

    return res;
}

int main() {
    int size; cin >> size;
    int maxHigh = 0;
    // 맵 정보 받아옴
    for (int i=0; i<size; i++) {
        for(int j=0; j<size; j++) {
            int tmp; cin >> tmp;
            map[i].push_back(tmp);
            if (tmp > maxHigh) maxHigh = tmp;
        }
    }
    
    int MAX = 0;

    for(int i=0; i<=maxHigh; i++) {
        int bfsRes = bfs(i, size);
        if(bfsRes > MAX) {
            MAX = bfsRes;
        }
    }
    cout << MAX;

    return 0;
}
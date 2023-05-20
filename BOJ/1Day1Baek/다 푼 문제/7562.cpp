#include <iostream>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <cstring>
#include <math.h>
#include <algorithm>
#include <cctype>
#include <climits>
using namespace std;

// Define


// Global variable
int length;
int startX, startY;
int destX, destY;
int dx[] = {2, 1, -1, -2, -2, -1, 1, 2};
int dy[] = {1, 2, 2, 1, -1, -2, -2, -1};
int dist[300][300];

// Function
void init() {
    ios::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
bool isInArea(int x, int y) {
    return ((0 <= x && x < length) && (0 <= y && y < length));
}
bool isDest(int x, int y) {
    return ((x == destX) && (y == destY));
}
void bfs() {
    queue<pair<int, int>> q;
    q.push({startX, startY});

    while(!q.empty()) {
        int curX = q.front().first;
        int curY = q.front().second;
        q.pop();

        if(isDest(curX, curY)) { return; }
        
        for(int i=0; i<8; i++) {
            int nextX = curX + dx[i];
            int nextY = curY + dy[i];

            // 다음 행선지가 영역 내부이고 방문한적이 없을 때
            if(isInArea(nextX, nextY)) {
                if(!dist[nextX][nextY]) {
                    dist[nextX][nextY] = dist[curX][curY] + 1;
                    q.push({nextX, nextY});
                }
                
            }
        }
        
    }
}

int main() {
    init();
    int T;
    cin >> T;

    while (T--) {
        cin >> length;
        cin >> startX >> startY;
        cin >> destX >> destY;
        memset(dist, 0, sizeof(dist));

        bfs();
        cout << dist[destX][destY] << "\n";
    }
    

    return 0;
}
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

// memset plz
int g[51][51];      // 방문하면 +1 해서 2가 되게 함.
int width, height;
int snail;

// just var
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};

void bfs(int x, int y){
    queue<pair<int, int>> q;
    q.push({x, y});
    g[x][y]++;
    while (!q.empty()){
        int now_x = q.front().first;
        int now_y = q.front().second;
        q.pop();
        for(int i=0; i<4; i++){
            int next_x = now_x + dx[i];
            int next_y = now_y + dy[i];
            if(0 <= next_x && next_x < width && 0 <= next_y && next_y < height) {
                if (g[next_x][next_y] == 1) {
                    q.push({next_x, next_y});
                    g[next_x][next_y]++;    // 방문했으면 2가 되어 방문요건(1일 때) 충족안되게
                }
            }
        }
    }
    snail++;
}
int main(){
    init();
    int t; cin >> t;
    while (t--){
        cin >> width >> height;
        int k; cin >> k;

        snail = 0;
        memset(g, 0, sizeof(g));    // 초기화를 안해서 틀린건가? ㅠㅠ

        while (k--){    // 배추 심기
            int x, y; cin >> x >> y;
            g[x][y] = 1;
        }

        for(int i=0; i<width; i++)
            for(int j=0; j<height; j++) // height인데 width를 사용함
                if(g[i][j] == 1) { bfs(i, j); }

        cout << snail << "\n";
    }

    return 0;
}

/*
 */

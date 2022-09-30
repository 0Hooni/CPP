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

int width, height;
bool paper[101][101];
int dx[] = {1, 0, -1, 0};
int dy[] = {0, 1, 0, -1};
vector<int> area;
void bfs(int x, int y);

int main() {
    init();
    int k;
    cin >> height >> width >> k;
    memset(paper, false, sizeof(paper));

    while (k--) {
        int lx, ly, rx, ry;
        cin >> lx >> ly >> rx >> ry;
        for (int i = lx; i < rx; i++)
            for (int j = ly; j < ry; j++) { paper[i][j] = true; }
    }

    for (int i = 0; i < width; i++){
        for (int j = 0; j < height; j++)
            if (!paper[i][j]) bfs(i, j);
    }

    sort(area.begin(), area.end());
    cout << area.size() << "\n";
    for(auto i : area) cout << i << " ";
    return 0;
}

void bfs(int x, int y){
    queue<pair<int, int>> q;
    q.push({x, y});
    paper[x][y] = true;
    int size = 1;
    while (!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0 <= nx && nx < width && 0 <= ny && ny < height){
                if(!paper[nx][ny]){
                    q.push({nx, ny});
                    paper[nx][ny] = true;
                    size++;
                }
            }
        }
    }
    area.push_back(size);
}
/*
 * 좌표 왼쪽 아래가 블럭 하나라고 생각
 *
 */

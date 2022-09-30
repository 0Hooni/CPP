//문제번호 : 4963

#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>

using namespace std;

//def area
typedef long long ll;

//global var area
int w, h;       // 1...50
bool land[51][51];
bool check[51][51];
int cnt_land = 0;

int dx[] = {1, 1, 1, 0, -1, -1, -1, 0};
int dy[] = {1, 0, -1, -1, -1, 0, 1, 1};
//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

void bfs(int _x, int _y){
    queue<pair<int, int>> q;
    q.push(make_pair(_x, _y));
    check[_x][_y] = true;

    while (!q.empty()){
        _x = q.front().first;
        _y = q.front().second;
        q.pop();
        for(int i=0; i<8; i++){
            int nx = _x + dx[i];
            int ny = _y + dy[i];
            if (0 <= nx && nx < h && 0 <= ny && ny < w)
                if(!check[nx][ny] && land[nx][ny]){
                    q.push(make_pair(nx, ny));
                    check[nx][ny] = true;
            }
        }
    }
    cnt_land++;
}


int main() {
    //code

    while (true) {
        memset(land, false, sizeof(land));
        memset(check, false, sizeof(check));

        cin >> w >> h;
        if(w == 0 && h == 0) break;

        for(int i=0; i< h; i++){
            for(int j=0; j<w; j++){
                cin >> land[i][j];
            }
        }
        cnt_land = 0;
        for(int i=0; i<h; i++){
            for(int j=0; j<w; j++){
                if((!check[i][j]) && land[i][j])
                    bfs(i, j);
            }
        }
        cout << cnt_land << "\n";
    }

    //code
    return 0;
}

/*
 * 그래프 그룹이 몇개인가 세는 문제
 */

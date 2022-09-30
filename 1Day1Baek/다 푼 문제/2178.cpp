//문제번호 : 2178
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
int n, m;
int maze[101][101];
bool check[101][101];
int dist[101][101];
int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}
void bfs(int _x, int _y){
    queue<pair<int, int>> q;
    q.push(make_pair(_x, _y));
    check[_x][_y] = true;
    dist[_x][_y] = 1;


    while(!q.empty()){
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for(int i=0; i<4; i++){
            int nx = x+dx[i];
            int ny = y+dy[i];
            if(0 <= nx && nx < n && 0 <= ny && ny < m){
                if(!check[nx][ny] && maze[nx][ny] == 1){
                    q.push(make_pair(nx, ny));
                    dist[nx][ny] = dist[x][y] + 1;
                    check[nx][ny] = true;
                }
            }
        }
    }
}



int main() {
    //code
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            char c;
            cin >> c;
            maze[i][j] = c - '0';
        }
    }

    bfs(0, 0);

    cout << dist[n-1][m-1];
    //code
    return 0;
}

/*
 */

//문제번호 : 7576
#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
using namespace std;

//def area

//global var area
int n, m;
int box[1001][1001];
int day[1001][1001];    //최소 날짜를 구하기 위해

queue<pair<int, int>> q;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}
void bfs(int x, int y){
    while (!q.empty()){
        x = q.front().first;
        y = q.front().second;
        q.pop();

        for(int i=0; i<4; i++){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(0<=nx && nx < m && 0<=ny && ny < n){
                if(day[nx][ny] == -1 && box[nx][ny] == 0){
                    day[nx][ny] = day[x][y] + 1;
                    q.push(make_pair(nx, ny));
                }
            }
        }
    }
}


int main() {
    //code
    cin >> n >> m;  // x, y 순으로 입력
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin >> box[i][j];
            day[i][j] = -1;
            if(box[i][j] == 1) {
                q.push(make_pair(i, j));
                day[i][j] = 0;
            }
        }
    }
    bfs(q.front().first, q.front().second);

    int MAX_day = 0;
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(MAX_day < day[i][j]) MAX_day = day[i][j];
        }
    }
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            if(box[i][j] == 0 && day[i][j] == -1) MAX_day = -1;
        }
    }

    cout << MAX_day;

    //code
    return 0;
}

/*
 * bfs의 depth 가 day라 생각하고 풀면 될듯
 * 멀리있는 토마토와 가까이 있는 토마토 중에 date가 더 적은게 real day
 */

//문제번호 : 1260
#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <queue>
#include <algorithm>

using namespace std;
typedef long long ll;
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

//global var
int _pair[1001][1001];
int n;
bool check[1001];

//function area
void dfs(int start){
    check[start] = true;
    cout << start << " ";

    for(int i=1; i<=n; i++){
        if(_pair[start][i] == 1 && check[i] == false)
            dfs(i);
    }
}

void bfs(int start) {
    memset(check, false, sizeof(check));
    queue<int> now;

    check[start] = true;
    now.push(start);

    while(!now.empty()) {
        cout << now.front() << " ";
        start = now.front();
        now.pop();

        for(int i=1;i<=n;i++) {
            if (_pair[start][i] == 1 && check[i] == false) {
                check[i] = true;
                now.push(i);
            }
        }

    }
}

int main(){
    init();
    //code
    int m, start;
    cin >> n >> m >> start;

    for(int i=0;i<m;i++){
        int a, b;
        cin >> a >> b;
        _pair[a][b] = 1;
        _pair[b][a] = 1;
    }

    dfs(start);
    cout << "\n";
    bfs(start);

    //code
    return 0;
}
/*
 */

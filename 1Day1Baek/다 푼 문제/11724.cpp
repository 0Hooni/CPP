//문제번호 : 11724
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
bool _pair[1001][1001];
bool check[1001];
ll node, line;
int cnt;

//function area
void dfs(int start_node){
    check[start_node] = true;

    for(int i=1; i<=node; i++){
        if(_pair[start_node][i] == true && check[i] == false){
            dfs(i);
        }
    }

}

int main() {
    init();
    //code
    cin >> node >> line;

    int start_num = 0;
    for (int i = 0; i < line; i++) {
        int u, v;
        cin >> u >> v;
        _pair[u][v] = _pair[v][u] = true;
        start_num = u;
    }


    for (int i = 1; i <= node; i++)
        if (!check[i]){
            dfs(i);
            cnt++;
        }

    cout << cnt;
    //code
    return 0;
}
/*
 * 하나의 그래프를 전부 탐색한 이후 카운트 해준다
 */

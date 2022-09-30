//문제번호 : 1707
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
#define MAX_V_INDEX 20001

//global var area
int v, e;
int t;

vector<int> g[MAX_V_INDEX];
int level[MAX_V_INDEX];
//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

bool dfs(int node, int lv){
    level[node] = lv;

    for(int i=0; i<g[node].size(); i++){
        int next = g[node][i];
        if(level[next] == 0){
            if(dfs(next, 3-lv) == false) return false;
        }
        else if(level[next] == level[node]) return false;
    }

    return true;
}

int main() {
    //code
    cin >> t;

    while(t--){
        cin >> v >> e;

        for(int i=1; i<=v; i++){
            g[i].clear();
            level[i] = 0;
        }

        for(int i=0; i<e; i++){
            int n1, n2;
            cin >> n1 >> n2;

            g[n1].push_back(n2);
            g[n2].push_back(n1);
        }

        bool isBinary = true;
        for(int i=1; i<=v; i++)
            if(level[i] == 0)
                if(dfs(i, 1) == false) isBinary = false;

        cout << (isBinary ? "YES" : "NO") << "\n";
    }


    //code
    return 0;
}

/*
 */

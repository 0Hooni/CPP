//문제번호 : 11725
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
#define MAX_INDEX 100001

//global var area
ll n;
ll parent[MAX_INDEX];
int depth[MAX_INDEX];

bool check[MAX_INDEX];
vector<int> tree[MAX_INDEX];
queue<int> q;

//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

int main() {

    //code
    cin >> n;

    for(int i=0; i<n-1; i++){
        int n1, n2;
        cin >> n1 >> n2;
        tree[n1].push_back(n2);
        tree[n2].push_back(n1);
    }

    int root = 1;

    check[root] = true;
    parent[root] = 0;
    depth[root] = 1;
    q.push(root);


    while (!q.empty()){
        int now_node = q.front();
        q.pop();
        for(int i : tree[now_node]){
            if(!check[i]){
                check[i] = true;
                depth[i] = depth[now_node] + 1;
                parent[i] = now_node;
                q.push(i);
            }
        }
    }


    for(int i=2; i<=n; i++)
        cout << parent[i] << "\n";
    //code
    return 0;
}
/*
 * 배열 크기때문에 자꾸 오류났던 문제.
 * vector의 활용을 익숙해하자
 */

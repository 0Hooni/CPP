//문제번호 : 1991
#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>

using namespace std;

//typedef area
typedef long long ll;

//global var area
int n;  //노드의 개수
int tree[50][2];
//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

void preOrder(int parent){
    if(parent == -1) return;
    cout << (char)(parent + 'A');
    preOrder(tree[parent][0]);
    preOrder(tree[parent][1]);
}
void inOrder(int parent){
    if(parent == -1) return;
    inOrder(tree[parent][0]);
    cout << (char)(parent + 'A');
    inOrder(tree[parent][1]);

}
void postOrder(int parent){
    if(parent == -1) return;
    postOrder(tree[parent][0]);
    postOrder(tree[parent][1]);
    cout << (char)(parent + 'A');

}


int main() {
    init();
    //code
    cin >> n;


    for(int i=0; i<n; i++){
        char parent;
        char left_child, right_child;
        cin >> parent >> left_child >> right_child;
        int x = parent - 'A';

        if(left_child == '.') tree[x][0] = -1;
        else tree[x][0] = left_child - 'A';

        if(right_child == '.') tree[x][1] = -1;
        else tree[x][1] = right_child - 'A';
    }

    preOrder(0); cout << "\n";
    inOrder(0); cout << "\n";
    postOrder(0); cout << "\n";
    //code
    return 0;
}
/*
 */

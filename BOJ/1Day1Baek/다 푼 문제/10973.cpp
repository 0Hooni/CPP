//문제번호 : 10973
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
int n;
//function area
void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

int main() {
    cin >> n;
    vector<int> v(n);

    for(int i=0; i<n; i++)
        cin >> v[i];


    if(prev_permutation(v.begin(), v.end())) {
        for(int i=0; i<n; i++) cout << v[i] << " ";
    }
    else cout << -1;

    return 0;
}

/*
 */

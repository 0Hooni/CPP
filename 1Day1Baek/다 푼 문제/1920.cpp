#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <utility>
#include <set>
using namespace std;
void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(){
    init();
    int n; cin >> n;
    vector<int> n1;
    for(int i=0; i<n; i++){
        int tmp; cin >> tmp;
        n1.push_back(tmp);
    }
    sort(n1.begin(), n1.end());
    int m; cin >> m;
    vector<bool> b;
    for(int i=0; i<m; i++){
        int tmp; cin >> tmp;
        if(binary_search(n1.begin(), n1.end(), tmp))
            b.push_back(true);
        else b.push_back(false);
    }
    for(int i=0; i<b.size(); i++)
        cout << b[i] << "\n";

    return 0;
}

/*
 */

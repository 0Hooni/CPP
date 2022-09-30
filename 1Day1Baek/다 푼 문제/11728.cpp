#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
#include <utility>
using namespace std;
void init(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    init();
    int n, m; cin >> n >> m;
    vector<int> arr;
    for(int i=0; i<n+m; i++){
        int tmp; cin >> tmp;
        arr.push_back(tmp);
    }
    sort(arr.begin(), arr.end());
    for(int i=0; i<arr.size(); i++)
        cout << arr[i] << " ";

    return 0;
}

/*
 */

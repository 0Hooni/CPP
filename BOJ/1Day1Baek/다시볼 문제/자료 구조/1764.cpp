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
    vector<string> v1;
    vector<string> v2;
    int n, k; cin >> n >> k;
    while (n--){
        string tmp; cin >> tmp;
        v1.push_back(tmp);
    }
    sort(v1.begin(), v1.end());
    vector<string> v3;
    while (k--){
        string tmp; cin >> tmp;

        if(binary_search(v1.begin(), v1.end(), tmp))
            v3.push_back(tmp);
    }
    sort(v3.begin(), v3.end());

    cout << v3.size() << "\n";
    for(int i=0; i<v3.size(); i++){
        cout << v3[i] << "\n";
    }
    return 0;
}

/*
 * 이분 탐색을 통해서 탐색시간 단축
 */

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
int num[10001];
int main(){
    init();
    int n; cin >> n;
    vector<int> v;
    int max = 0;
    while (n--){
        int tmp; cin >>  tmp;
        max = max<tmp ? tmp:max;
        num[tmp]++;
    }
    for(int i=1; i<=max; i++){
        for(int j=0; j<num[i]; j++){
            cout << i << "\n";
        }
    }


    return 0;
}

/*
 */

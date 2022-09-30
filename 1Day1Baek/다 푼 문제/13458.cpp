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
    long long n; cin >> n;
    vector<int> A;
    while (n--){
        long long tester; cin >> tester;
        A.push_back(tester);
    }
    long long total = 0;
    long long dir, sub_dir; cin >> dir >> sub_dir;
    for(int i=0; i<A.size(); i++){
        total += 1;
        A[i] -= dir;
        if(A[i] <= 0) continue;
        else if(A[i]%sub_dir == 0)
            total += A[i]/sub_dir;
        else
            total += A[i]/sub_dir + 1;
    }
    cout << total;

    return 0;
}

/*
 */

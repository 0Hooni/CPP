#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <queue>
#include <math.h>
#include <utility>
#include <set>
using namespace std;
void init() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main(){
    init();
    int n; cin >> n;
    for(int i=0; i<n; i++){
        if(i == n-1){
            for(int j=0; j < 2*n-1; j++)
                cout << "*";
        }
        else{
            for(int j=n-1; j>=0; j--){
                if(j != i)
                    cout << " ";
                else
                    cout << "*";
            }
            for(int j=0; j<i; j++){
                if(j==i-1)
                    cout << "*";
                else
                    cout << " ";
            }
        }
        cout << "\n";

    }
}

/*
 * 다양한 풀이가 있을 것 같아서 선정
 */

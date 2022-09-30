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
int arr[3000][3000];
int p[3];
bool check_same(int x, int y, int len){
    int start_num = arr[x][y];
    for(int i=x; i<x+len; i++){
        for(int j=y; j<y+len; j++){
            if(arr[i][j] != start_num)
                return false;
        }
    }
    return true;
}
void bnq(int x, int y, int len){
    if(check_same(x, y, len)){
        p[arr[x][y] + 1]++;
    }
    else{
        int next_len = len/3;
        for(int i=x; i<x+len; i+=next_len){
            for(int j=y; j<y+len; j+=next_len){
                bnq(i, j, next_len);
            }
        }
    }
    return;
}
int main(){
    init();
    int n; cin >> n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            cin >> arr[i][j];

    bnq(1, 1, n);
    cout << p[0] << "\n" << p[1] << "\n" << p[2];
        return 0;
}

/*
 */

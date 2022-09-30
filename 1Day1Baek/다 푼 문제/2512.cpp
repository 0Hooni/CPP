#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

int n, total_budget;
vector<int> v;
int MID;

int main(){
    init();
    cin >> n;
    for(int i = 0; i < n;i++){
        int temp = 0;
        cin >> temp;
        v.push_back(temp);
    }
    cin >> total_budget;
    sort(v.begin(),v.end());
    int MIN = 0, MAX = v.back();


    int sum = 0;
    int result = 0;

    while(MIN<=MAX) {
        MID = (MIN + MAX)/2; sum = 0;
        for(int i = 0;i < v.size(); i++) sum += min(v[i], MID);

        if(sum<=total_budget) {
            result = MID;
            MIN = MID + 1;
        }
        else{
            MAX = MID - 1;
        }
    }
    cout << result;

    return 0;


}

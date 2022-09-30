#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

int N;  //시민의 숫자
int K;  //스타트 넘버
vector<int> rest;
vector<int> killed;
int nowIdx;

int main(){
    init();
    cin >> N >> K;
    nowIdx = K-1;
    for(int i = 0; i < N; i++) {
        rest.push_back(i+1);
    }


    while(rest.size() != 0){
        killed.push_back(rest[nowIdx]);
        rest.erase(rest.begin() + nowIdx);
        if(rest.size() == 0) break;
        nowIdx = (nowIdx + K - 1) % rest.size();
    }

    cout << "<";
    while(killed.size()){
        cout << killed.front();
        killed.erase(killed.begin());
        if(killed.size()) cout  << ", ";
    }
    cout << ">";

    return 0;
}

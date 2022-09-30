#include <iostream>
#include <vector>
#include <string.h>
#include <stack>
#include <algorithm>

using namespace std;

void init(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
}

int main(){
    init();
    string str;
    int M;  //명령어의 개수
    char cmd;

    stack<char> left;   //커서의 기준 왼쪽
    stack<char> right;  //커서 기준 오른쪽
    //커서는 left stack 의 top
    cin >> str;
    for(int i = 0; i < str.size(); i++){
        left.push(str[i]);
    }

    cin >> M;
    for(int i = 0; i < M; i++){
        cmd = NULL;
        cin >> cmd;
        if(cmd == 'L'){
            if(!left.empty()){
                right.push(left.top());
                left.pop();
            }
        }
        else if(cmd == 'D'){
            if(!right.empty()){
                left.push(right.top());
                right.pop();
            }
        }
        else if(cmd == 'B'){
            if(!left.empty()) left.pop();
        }
        else if(cmd == 'P'){
            char temp;
            cin >> temp;
            left.push(temp);
        }
    }

    while(!left.empty()){
        right.push(left.top());
        left.pop();
    }
    while(!right.empty()){
        cout << right.top();
        right.pop();
    }

    return 0;
}

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
//global var
string str;
int res;
int nowStick;

//막대 + 막대를 가르는 레이저개수 = 조각수
int main(){
    init();

    cin >> str;

    for(int i = 0; i < str.size(); i++){
        if(str[i] == '('){
            nowStick++;
        }
        else{
            if(str[i-1] == '('){
                nowStick--;
                res += nowStick;
            }
            else{
                nowStick--;
                res++;
            }
        }
    }


    cout << res;

    return 0;
}

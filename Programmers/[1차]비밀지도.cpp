#include <string>
#include <vector>
#include <math.h>

using namespace std;
string toBinary(int n, int num) {
    string r;
    for(int i=0; i<n; i++){
        r += ( num % 2 == 0 ? "0" : "1" );
        num /= 2;
    }
    return r;
}

vector<string> solution(int n, vector<int> arr1, vector<int> arr2) {
    vector<string> answer;

    for(int i=0; i<n; i++){
        // to binary
        string now1 = toBinary(n, arr1[i]);
        string now2 = toBinary(n, arr2[i]);

        // check to binary string arr1, arr2
        string tmp = "";
        for(int i=n-1; i>=0; i--){
            // if 1 => # 0 => " "
            if(now1[i] == '1' || now2[i] == '1')
                tmp += "#";
            else tmp += " ";
        }
        // push string to answer
        answer.push_back(tmp);
    }
    return answer;
}
#include <iostream>
#include <cstring>

using namespace std;

int main(){
    string n = "";

    while(1){
        int flag = 0;
        n = "";
        cin >> n;
        if(n == "0") break;
        
        for(int i = 0; i < n.size()/2; i++)
            if(n[i] != n[n.size()- (i+1)]){
                cout <<"no\n";
                flag = 1;
                break;
            }
        
        if(!flag) cout << "yes\n";
    }

    return 0;
}
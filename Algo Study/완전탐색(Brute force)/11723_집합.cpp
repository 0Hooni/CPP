#include <iostream>
#include <cstring>

using namespace std;

int n, x;
int bit;  //비트
string str;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    cin>>n;

    while(n--){
        str.clear();
        cin>>str;
        x=0;
        
        if (str == "add"){
            cin>>x;
            bit |= (1<<x);
        }
        else if (str == "remove"){
            cin>>x;
            bit &= ~(1<<x);
        }
        else if (str == "check"){
            cin>>x;
            if(bit&(1<<x)) cout<<"1"<<"\n";
            else cout<<"0"<<"\n";
        }
        else if (str == "toggle"){
            cin>>x;
            bit ^= (1<<x);
        }
        else if (str == "all")
            bit = (1<<21)-1;
        else if (str == "empty")
            bit = 0;
        
    }

    return 0;
}
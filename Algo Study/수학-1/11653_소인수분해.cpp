#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    for(int i=2;n!=1;i++){
        if(n%i==0) {
            cout<<i<<"\n";
            n=n/i; 
            i=1;
        }
    }

    return 0;
}
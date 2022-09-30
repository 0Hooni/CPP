#include <iostream>

using namespace std;

int num[10];

int fibo(int n){
    if(n<=2) {
        num[n]=n;
        return num[n];
    }

    else if(n==3) {
        num[n]=4;
        return num[n];
    }

    else {
        num[n]=fibo(n-1)+fibo(n-2)+fibo(n-3);
        return num[n];
    }
}

int main(){
    int T=0;    // TS의 수
    cin>>T;
    
    while(T--){
        int n=0;
        cin>>n;

        cout<<fibo(n)<<"\n";
    }

    return 0;
}
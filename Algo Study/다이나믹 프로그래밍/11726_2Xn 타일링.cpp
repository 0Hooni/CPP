#include <iostream>

using namespace std;

int arr[1001];
int fibo(int n){
    if(n<=2) {
        arr[n]=n;
        return arr[n];
    }
    if(arr[n]!=0) return arr[n];
    else {
        arr[n]= (fibo(n-1)+fibo(n-2)) % 10007;
        return arr[n];
    }
}

int main(){
    int n;
    cin>>n;

    cout<<fibo(n) % 10007;

    return 0;
}
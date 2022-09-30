#include <iostream>

using namespace std;

bool prime(int n){
    if(n==1) return false;

    int check=0;

    for(int i=2;i<n;i++){
        if(n%i==0) check++;
    }
    if(check==0) return true;
    else return false;
}

int main(){
    int n;
    cin>>n;
    
    int num[100]={0};

    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>num[i];
        if(prime(num[i])) cnt++;
    }
    cout<<cnt;

    return 0;
}
#include <iostream>

using namespace std;

int GCD(int n1,int n2){
    if(n2==0) return n1;
    else return GCD(n2,n1%n2);
}

int lcm(int n1,int n2){

    return n1*n2/GCD(n1, n2);
}

int main(){
    int n1,n2;
    cin>>n1>>n2;
    int save_n[2]={n1,n2};

    if(n1<n2) swap(n1,n2);

    cout<<GCD(n1,n2)<<"\n";
    cout<<lcm(n1,n2);

    return 0;
}
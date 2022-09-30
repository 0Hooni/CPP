#include <iostream>
#include <cmath>

using namespace std;

long long int combi(int n, int r){
    long long int top=1;
    long long int bottom=1;
    if(r==0) return 1;
    else {
        for(int i=1;i<=r;i++){
            top *= n-(i-1);
            bottom *= i;
        }
    return top/bottom;
    }
}

int main(){
    int n;
    cin>>n;

    //n/2+1 만큼 nC0 ~ n-n/2+1Cn/2+1;

    int size= n/2 + 1;
    long long int sum=0;

    for(int i=0;i<size;i++){
        sum+=combi(n-i,i);
    }

    cout << sum % 10007;
    return 0;
}

//왜 틀린걸까....
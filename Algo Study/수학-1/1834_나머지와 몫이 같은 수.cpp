#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    unsigned long long int sum = 0;

    for(int i=0;i<n;i++){
        sum+=i*n+i;
    }

    cout<<sum;

    return 0;
}
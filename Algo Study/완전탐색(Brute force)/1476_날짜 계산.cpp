#include <iostream>

using namespace std;

int main(){
    int E,S,M;
    cin>>E>>S>>M;
    int i=1;

    if(E%15==0) E=0;
    if(S%28==0) S=0;
    if(M%19==0) M=0;
    while (i % 15 != E || i % 28 != S || i % 19 != M) i++;
    
    cout<<i;

    return 0;
}
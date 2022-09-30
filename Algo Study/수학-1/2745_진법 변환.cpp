#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main(){
    string n;
    int b=0;
    cin>>n>>b;

    unsigned long long int decimal=0;


    for(int i=0; i<n.size(); i++){
        if('0' <= n[i] && n[i] <= '9') 
            decimal += (n[i] - '0') * pow(b, n.size() - (i+1));

        else if('A' <= n[i] && n[i] <= 'Z')
            decimal += (n[i]- 'A' + 10) * pow(b, n.size() - (i+1));
    }

    cout << decimal;

    return 0;
}
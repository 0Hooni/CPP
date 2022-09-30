#include <iostream>
#include <vector>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int m, n;
    cin>>m>>n;

    vector<bool> prime(10001,true);

    prime[0]=false;
    prime[1]=false;

    for(int i=2;i<=n;i++){
        if(prime[i])
            for(int j=i*i;j<=n;j+=i)
                prime[j]=false;
            
        
        if(i>=m && prime[i]) cout << i << "\n";
    }

    return 0;
}
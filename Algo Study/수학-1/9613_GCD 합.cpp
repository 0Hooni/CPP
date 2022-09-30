#include <iostream>

using namespace std;

int GCD(int a,int b){
    if(a<b) swap(a,b);

    if (b==0) return a;
    else return GCD(b,a%b);
}

int main(){
    unsigned int t;
    cin>>t;

    while(t--){
        unsigned int n;
        cin>>n;

        unsigned int num[100]={0};

        for(int i=0;i<n;i++){
            cin>>num[i];
        }

        unsigned long long int sum=0;

        for(int i=0;i<n;i++)
            for(int j=i+1;j<n;j++){
                sum+=GCD(num[i],num[j]);
            }
        
        cout<<sum<<"\n";
    }

    return 0;
}
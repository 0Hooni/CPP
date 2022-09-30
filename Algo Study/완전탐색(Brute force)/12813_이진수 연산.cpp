#include <iostream>
#include <cstring>
#include <bitset>

using namespace std;

// int main(){
//     string A,B;
//     cin>>A>>B;

//     for(int j=0;j<A.size();j++){
//         if(A[j]=='1' && B[j]=='1') cout<<1;
//         else cout<<0;
//     }
//     cout<<"\n";

//     for (int j=0;j<A.size();j++) {
//         if (A[j]=='1' || B[j]=='1') cout<<1;
//         else cout<<0;
//     }
//     cout<<"\n";

//     for (int j=0;j<A.size();j++) {
//         if (A[j] != B[j]) cout<<1;
//         else cout<<0;
//     }
//     cout<<"\n";

//     for (int j=0;j<A.size();j++) {
//         if (A[j]!='1') cout<<1;
//         else cout<<0;
//     }
//     cout<<"\n";

//     for (int j=0;j<A.size();j++) {
//         if (B[j]!='1') cout<<1;
//         else cout<<0;
//     }

//     return 0;
// }

int main(){
    bitset<100000> A;
    bitset<100000> B;
    cin>>A>>B;
    cout << (A&B) << "\n" << (A|B) << "\n" 
         << (A^B) << "\n" << (~A) << "\n"
         << (~B);
}
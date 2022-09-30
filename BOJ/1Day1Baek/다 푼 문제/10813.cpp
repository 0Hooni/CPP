#include <iostream>

using namespace std;

int main()
{
    int n, m;
    n = m = 0;
    int basket[100];

    for(int i = 0;i<100;i++){
        basket[i] = i+1;    //1번 바구니(idx = 0)에 1번공
    }

    cin >> n >> m;

    for(int i=0;i<m;i++){
        int num[2] = {0};
        cin>>num[0]>>num[1];

        swap(basket[num[0]-1],basket[num[1]-1]);
    }

    for(int i=0;i<n;i++){
        cout<<basket[i]<<" ";        
    }
    return 0;
}
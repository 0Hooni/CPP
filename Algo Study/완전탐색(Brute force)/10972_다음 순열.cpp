#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    //next_permutation은 bool타입의 함수로, 다음 순열이 존재할 경우 
    //다음 순열로 바꿔주며, true를 반환하며
    //다음 순열이 존재하지 않으면 false를 반환

    if(next_permutation(arr.begin(),arr.end()))
        for(int i=0;i<n;i++)
            cout<<arr[i]<<" ";
    
    else
        cout<<"-1";

    return 0;
}
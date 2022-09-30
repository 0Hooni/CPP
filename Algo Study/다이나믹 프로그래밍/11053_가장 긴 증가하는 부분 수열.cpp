#include <iostream>
#include <vector>

using namespace std;

int dp[1001];

int main(){
    int n;
    cin>>n;
    
    vector<int> arr(n);

    for(int i=0; i<n; i++)
        cin >> arr[i];

    int res=1;

    for(int i=0; i<n; i++){
        dp[i]=1;
        for(int j=0; j<i; j++){
            if(arr[i] > arr[j])
                dp[i] = max(dp[i], dp[j] + 1);
        }
        res = max(res, dp[i]);
    }

    cout << res << "\n";

    return 0;
}
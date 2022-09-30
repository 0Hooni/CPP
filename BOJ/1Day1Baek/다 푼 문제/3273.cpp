#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n = 0;
    cin >> n;
    vector<int> arr;


    for(int i = 0;i < n; i++){
        int temp = 0;
        cin >> temp;
        arr.push_back(temp);
    }

    int x = 0;
    cin >> x;
    sort(arr.begin(), arr.end());   //핵심 개념이라 생각함...

    int left, right;
    left = 0;
    right = n - 1;

    int count = 0;

    while(left < right){
        if(arr[left] + arr[right] == x){
            count++;
            right--;
            //왼쪽 작은수보다 더 작은 수가 없으니까 이 조합은 이게 끝
            //right--하여 다음 조합을 찾음
        }
        else if(arr[left] + arr[right] > x){
            right--;
            //가장 작은 수 + 가장 큰수 > 비교값 :가장 큰수로는 조합이
            //안되므로 right--
        }
        else{
            left++;
            //else if의 반대의 경우이므로
            //이때는 left++
        }
    }

    cout << count;

    return 0;
}
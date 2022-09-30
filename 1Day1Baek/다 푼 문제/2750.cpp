#include <iostream>

using namespace std;

void bubbleSort(int n[], int size) {
    for(int i =0;i<size;i++){
        for(int j = i; j<size; j++){
            if(n[i]>n[j]) swap(n[i], n[j]);
        }
    }
}

int main()
{
    int n = 0;
    int num[1000] = {0};

    cin >> n;

    for(int i = 0;i<n;i++)
        cin>>num[i];
    
    bubbleSort(num,n);

    for(int i = 0; i<n;i++)
        cout<<num[i]<<"\n";
    
    return 0;
}
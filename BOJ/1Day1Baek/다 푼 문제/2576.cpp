#include <iostream>

using namespace std;

int main()
{
    int num[7];
    int count = 0;
    int sum = 0;
    int min = 100;

    for(int i = 0; i < 7; i++){
        cin >> num[i];
        if(num[i] % 2 != 0){
            count++;
            sum += num[i];
            if(min > num[i])
                min = num[i];
        }
    }
    if(count == 0)
        cout << -1;
    else
        cout << sum << "\n" << min;

    return 0;
}
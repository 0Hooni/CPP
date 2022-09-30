
#include <iostream>

using namespace std;

int main()
{
    int input[8] = {0};

    for (int i = 0; i < 8; i++)
        cin>> input[i];

    int asCheck = 0;
    int dsCheck = 0;

    for (int i = 0; i < 7; i++){
        if(input[i] + 1 == input[i+1]) asCheck++;
        if(input[i] - 1 == input[i+1]) dsCheck++;
    }

    if(asCheck == 7) {
        cout<<"ascending";
        return 0;
    }
    if(dsCheck == 7) {
        cout<<"descending";
        return 0;
    }

    cout<<"mixed";
    
    return 0;
}
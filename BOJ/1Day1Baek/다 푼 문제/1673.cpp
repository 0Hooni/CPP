#include <iostream>

using namespace std;

void init()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

int main()
{
    init();
    int n, k; //n은 쿠폰개수

    while (cin >> n >> k)
    {

        int coupon = n;
        int totalChicken = n;

        while (coupon / k > 0)
        {
            int service = coupon / k;
            totalChicken += service;
            coupon = coupon % k + service;
        }

        cout << totalChicken << "\n";
    }

    return 0;
}
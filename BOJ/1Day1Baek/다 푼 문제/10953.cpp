#include <iostream>

using namespace std;

int main()
{
   int T = 0;
   cin >> T;

   while(T--){
       int A, B;
       char temp;
       cin >> A >> temp >> B;
       cout << A + B << "\n";
   }

   return 0;
}
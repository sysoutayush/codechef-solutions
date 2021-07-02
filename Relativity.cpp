#include <iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   int g,c;
   while(t--){
       cin>>g>>c;
       int h=0;
       h=(c*c)/(2*g);
       cout << h << endl;
   }

    return 0;
}

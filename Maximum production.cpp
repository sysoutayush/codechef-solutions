#include <iostream>
using namespace std;
int main()
{
   int t;
   cin>>t;
   int a,b,c,d;
   while(t--){
       cin>>a>>b>>c>>d;
       int p=0,q=0;
       p=b*7;
       q=c*a+((7-a)*d);
       if(p>q){
           cout<<p<<endl;
       }
       else{
           cout<<q<<endl;
       }
  
   }

    return 0;
}

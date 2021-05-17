#include<bits/stdc++.h>
using namespace std;
int main()
{
 int x;
 float y;
 cin>>x>>y;
 if(y<x)
 cout<<y;
 elseif(x%5!=0 || (x=0.50)>y)
 cout<<fixed<<setprecision(2)<<y;
 else{
 cout<<fixed<<setprecision(2)<<y-x-0.50);
 }
 return 0;
 }
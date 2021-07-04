#include<bits/stdc++.h>
using namespace std;
typedef long long int xr;

class Solution {
    public:
    int solve (vector<xr> &r,xr n)
   {
    string s="";
    xr i,j=31;
    while(n>0)
    {
        s+=to_string(n%2);
        n/=2;
    }
        xr n1=s.size();
        for(i=0;i<n1;i++)
        {
            if(s[i]=='1')
            {
                r[j]+=1;
            }
            
            j--;
        }
    return 0;    
   }
};

int main()
{   long long int  t,i,j;
    cin>>t;
    Solution obj;
    while(t--)
    {
        xr n,k;
        cin>>n>>k;
        vector<int> a(n);
        for(i=0;i<n;i++)
        cin>>a[i];
         vector<xr> r(32,0);
        for(i=0;i<n;i++)
        { 
            obj.solve(r,a[i]);
         }
        long long int b=0;
        for(i=0;i<32;i++)
        {
            if(r[i]==0)
            continue;
            else if(r[i]%k==0)
            {
                b+=(r[i]/k);
            }
            else
            {
                b+=(r[i]/k+1);
            }
        }
        cout<<b<<"\n";
    }

    return 0;
}

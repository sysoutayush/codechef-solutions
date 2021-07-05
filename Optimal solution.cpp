#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=1e6;
int a[N],f[N],b[N];

int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

void gcd_a(int n)
{  
    f[1]=a[1];b[n]=a[n];
    
    for(int i=n-1;i>0;i--)
     {
       b[i]=gcd(b[i+1],a[i]);
      }
    for(int i=2;i<n+1;i++)
     {
       f[i]=gcd(f[i-1],a[i]);
      }
    }

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
  int t;
  cin>>t;
  while(t--)
  {
      int n;
      cin>>n;
      int p=0;
      int q=0;
      for(int i=1;i<n+1;i++)
      {
          cin>>a[i];
      }
      sort(a,a+n+1);
      gcd_a(n);
      for(int i=1;i<n+1;i++)
      {
          p+=a[i];
      }
      int w=LLONG_MAX;
        for(int i=1;i<n+1;i++)
        {
            q=(p-a[i]+gcd(f[i-1],b[i+1]))/gcd(f[i-1],b[i+1]);
            if(q<w)
            w=q;
        }
      cout<<w<<endl;
  }
  return 0;
}

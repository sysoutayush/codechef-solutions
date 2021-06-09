#include <bits/stdc++.h>

using namespace std;
#define int long long
#define MOD 1000000007


void solve(){
    int i;
    int x,y; cin>>x>>y;
    int a[x];
    int b[y];
    
    for (i=0;i<x;i++) {
        cin>>a[i];}
        for(i=0;i<y;i++){
        cin>>b[i];}
        
        int max=1e9;
        map<int,int>f;
    
           for(i=0;i<x;i++)  {
               if(i==0) f[i]=0;
               else if (a[i]!=0) f[i]=0;
               
               else f[i]=max; 
               
           }
           
          int rt=-1;
           for(i=0;i<x;i++) {
               if(a[i]==1) rt=i;
               if(rt!=-1) {
                   if(a[i]==0)
                   f[i]=min(f[i],i-rt);
               }
               }
               
           int lt =-1;
             for(i=x-1;i>=0;i--) {
                if(a[i]==2) lt=i;
                  if(lt!=-1) {
                      if(a[i]==0) 
                      f[i] =min(f[i],lt-i);
                
                   }
               }
               
             for(i=0;i<y;i++){
                   int j=b[i]-1;
                   if(f[j]!=max)
                   cout<<f[j]<<" ";
                   else 
                  cout<< -1<<" ";
               }
               
           cout<<"\n";
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int t;
    cin>>t;
    // t = 1;
    int _=1;
    while(t--){
        // cout<<"Case #"<<_++<<": ";
        solve();
    }
    return 0;
}
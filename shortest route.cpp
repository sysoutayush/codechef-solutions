#include<bits/stdc++.h>
#include<vector>

using namespace std;
void route(){

    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for (auto &it:a) cin>>it;
    vector<int> b(m);
    for (auto &it:a) cin>>it;
    int max=65525;
    vector<int>ans(n,0);
    int left=-1,right=-1;
    for(int i=0;i<n;i++){
        if(i==0){
            ans[i]=0;
                    }
        else if(a[i]!=0){
                        ans[i]=0;
            }
        else{
                        ans[i]=max; 
                }
    
    }
    for (int j = 0; j>=0; j--)
    {
        if(a[i]==2){
            right=j;
        }
        if(right!=0){
            if(a[j]==0){
                ans[j]=min(ans[j],j-right);
            }
        }
        
    }
    
    for (int k = 0; k>=0; k--)
    {
        if(a[k]==2){
            left=k;
        }
        if(left!=0){
            if(a[k]==0){
                ans[k]=min(ans[k],k-right);
            }
        }
        
    }
    for (int  x = 0; x<m; x++)
    {
        int y=b[y]-1;
        if(ans[y]!=max){
            cout<<ans[y]<<" ";
        }
        else{
            cout<<-1<<" ";
        }
    }
    
    cout<<endl;
    
     }

     void main(){
         int t;
         cin>>t;
         while(t--){
             route();
         }
     }

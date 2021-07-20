    #include<iostream>
    using namespace std;
    long k;
    int d0,d1;
    
     class Solution{
         
     public:    bool isDivisible() {
     
                long a = (d0 + d1)%10;
     
                if(k==2) 
                return a%3==0;
     
                if(a==0 || a==5)
                  return false;
     
                  long sum = d0 + d1 + a;
                  a = sum%10;
                  k -= 3;
     
                long quotient = k/4;
                long rem = k%4;
     
              sum += (quotient*20);
     
             while(rem--) {
                   sum += a;
                   a <<= 1;
                   a %= 10;
              
               }
     
            return sum%3==0;
      }
     
 };
     
    int main() {
        
      Solution obj;
      int t;
      cin>>t;
     
      while(t--) {
     
        cin>>k;
        cin>>d0>>d1;
     
       obj.isDivisible() ? cout<<"YES" : cout<<"NO";
        cout<<"\n";
      }
     
      return 0;
    }

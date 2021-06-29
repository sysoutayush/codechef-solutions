#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
  //first loop to take input and return ans 
	while(t--){
	    int n, reverse=0, rem;
	    cin>>n;
    // for finding reverse
	     while(n!=0)    
       {    
        rem=n%10;      
        reverse=reverse*10+rem;    
        n/=10;    
        }
        cout<<reverse<<endl;
	}
	return 0;
}

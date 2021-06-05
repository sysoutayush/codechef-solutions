#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	long long D,d,p,q;
	while(t--){
	    cin>>D>>d>>p>>q;
	    long long z=D/d;
	    if (D%d==0){
	        long long temp=d*z*p +q*(z-1)*z*d/2;
	        std::cout << temp << std::endl;
	    }
	    
	    else{
	        long long temp=d*z*p +q*(z-1)*z*d/2;
	        long long x=D%d;
	        temp+=x*(p+z*q);
	        std::cout << temp << std::endl;
	    }
	}
	return 0;
}

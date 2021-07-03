#include <bits/stdc++.h>

using namespace std;

int main()
{   int a[]={8,4,2};
   int n = sizeof(a) / sizeof(a[0]);
	     sort(a, a + n);
	     int m=a[2]/a[0];
        if(m>2){
            a[2]=2;
        }
      
    return 0;
}

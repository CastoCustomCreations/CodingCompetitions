#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n,s,l,m,b,x;
	    s=l=m=0;
	    cin >>n;
	     for(int i = 1; i <=n; ++i)
	     {
	         cin>> x;
	         l += (x==0);m += (x==1);b=min(l,m);
	         l -= b;m-=b;s+=b;
	     }
	     cout << s + m/3<<endl;
	}
	
}

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin>>t;
	 while(t--){
	     int a,b,c;
	     cin >>a>>b>>c;
	     if((a+b)&1 || (b+c)&1 || (c+a)&1)
	     {cout<<"YES"<<endl;}
	     else
	     {cout<<"NO"<<endl;}
	 }
	return 0;
}

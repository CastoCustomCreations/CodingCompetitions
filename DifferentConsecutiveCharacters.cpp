#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n, cou = 0;
	    cin>>n;
	    string str;
	    cin>>str;
	    for(int i = 1;i<n; i++)
	    {
	        if (str[i] == str[i-1])
	        cou++;
	    }
	   cout << cou << endl; 
	}
	
}

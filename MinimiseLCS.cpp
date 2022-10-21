#include <iostream>
#include <map>
using namespace std;

int main() {
	// your code goes here
	int t; 
	cin>>t;
	while(t--){
	    int n, s=0;
	    string A, B;
	    cin>>n>>A>>B;
	    map<char,int>P,Q;
	    for(char i : A){
	        P[i]++;
	    }
	    for (char i: B){
	        Q[i]++;
	        
	    }
	    for (char i = 'a'; i <= 'z'; ++i){
	        s = max(s,min(P[i],Q[i]));
	    }
	    cout<<s<<endl;
	}
	
}

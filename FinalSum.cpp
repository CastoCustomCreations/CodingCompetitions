#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,q;
	    cin>>n>>q;
	    int a[n];
	    long long int sum = 0;
	    for(int i=0; i<n; i++){
	        cin>>a[i];
	  	    }
	  	for(int i=0; i<n; i++)
	  	sum = sum+a[i];
	  	int b[q][2];
	  	for(int i =0; i<q; i++){
	  	    cin>>b[i][0];
	  	    cin>>b[i][1];
	  	}
	  	for(int i=0; i<q; i++){
	  	    int temp = b[i][1]-b[i][0];
	  	    temp++;
	  	    if(temp%2==0)
	  	    continue;
	  	    else
	  	    sum++;
	  	}
	  	cout<<sum<<endl;
	  	
	}

	return 0;
}

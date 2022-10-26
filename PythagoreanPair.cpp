#include<bits/stdc++.h>
#define int long long
using namespace std;

int n,x;
void solve(){
    cin>>n;x=0;
    while(n%2==0){x++;n/=2;}
    if(x%2==1){x--;n*=2;}
    for(int i=0;i*i<=n;++i){
        int y=n-i*i,z=sqrt(y);
        if(z*z==y){
            cout<<(z<<(x/2))<<' '<<(i<<(x/2))<<endl;
            return;
        }
    }
    puts("-1");
}
signed main(){
    int t;
    cin>>t;
    while(t--)solve();
}

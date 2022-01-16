#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,c=0,sum=0;
    cin>>n;
	// root(N) complexity
	for(int i=1;i*i<=n;i++){
	    if(n%i==0){
	        cout<<i<<" "<<n/i<<endl;
	        c++;
	        sum+=i;
	        if(n/i!=i){
	            sum+=n/i;
	            c++;
	        }
	    }
	}
	cout<<c<<" "<<sum<<endl;
	
	//
	return 0;
}

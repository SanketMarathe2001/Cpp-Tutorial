#include <iostream>
using namespace std;

int main() {
	// swap number using xor 
	int a=6,b=4;
	a=a^b;
	b=b^a;
	a=a^b;
	cout<<a<<" "<<b<<endl;
	
	//eliminate duplicates
	int n;
	cin>>n;
	int x; 
	int ans=0;
	for(int i=0;i<n;i++){
	    cin>>x;
	    ans^=x;
	}
	cout<<ans<<endl;
	return 0;
}

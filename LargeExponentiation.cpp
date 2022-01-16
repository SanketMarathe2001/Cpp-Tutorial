#include<bits/stdc++.h>
using namespace std;

const long long int M = 1e18+7;

long binMultiply(long long a,long long b){
	long ans = 0;
	while(b>0){
		if(b&1){
			ans = (ans+a)%M;
		}
		a=(a+a)%M;
		b>>=1;
	}
	return ans;

}

//iterative method tc=log(b)
int binExpIter(long long a,long long b){
	long ans = 1;
	while(b>0){
		if(b&1){
			ans = binMultiply(ans,a);
		}
		a=binMultiply(a,a);
		b>>=1;
	}
	return ans;
}


int main(){
	cout<<binExpIter(2,13)<<endl;

	return 0;
}
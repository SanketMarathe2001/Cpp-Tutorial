#include<bits/stdc++.h>
using namespace std;
int main(){
	int  n,i; 
  cin >> n;
  vector<int> v;
  for(i=2;i*i<=n;i++){
    while(n%i==0){
      v.push_back(i);
      n = n/i;
    }
  }

  if(n>1){
    v.push_back(n);
  }

  for(auto i = v.begin();i!=v.end();i++)
    cout<<*i<<" "; 
  	return 0;
}

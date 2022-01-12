#include<bits/stdc++.h>
using namespace std;

void printBinary(int num){
	for(int i=10 ; i>=0 ; --i){
		cout<<((num >> i) & 1);
	}
	cout<<endl;
}

int main(){
	printBinary(9);
	int a=9;
	int i=0;
	if((a&(1<<i)) !=0){
		cout<<"set bit";
	}
	else
		cout<<"not set bit";
	// bit set
	printBinary(a | (1<<1));
	//inverse
	printBinary(~a);
	//bit unset
	printBinary(a & (~(1<<3)));
	//toggle
	printBinary(a ^ (1<<2));

	//inbuilt function to count set bit
	cout<<__builtin_popcount(a)<<endl;
	cout<<__builtin_popcountll((1LL<<35)-1);
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main(){
	stack<int> s,s1,s2;
	//Stack Push
	s.push(0);
	s.push(1);
	s.push(2);
	cout<<"Simple stack = ";
	while(!s.empty()){
		cout<<s.top()<<" ";
		//Stack Pop
		s.pop();
	}

	s1.push(1);
	s1.push(2);
	s1.push(3);
	s1.push(4);

	s2.push(5);
	s2.push(6);
	s2.push(7);
	s2.push(8);

	cout<<"Before swap function\n";
	cout<<"s1 = ";
	//Stack Empty to check stack is empty or not.
	while(!s1.empty()){
		cout<<s1.top()<<" ";
		//Stack Pop
		s1.pop();
	}
	cout<<"\ns2 = ";
	while(!s2.empty()){
		cout<<s2.top()<<" ";
		//Stack Pop
		s2.pop();
	}
	
	//Stack Emplace(Insert value not its copy)
	s1.emplace(1);
	s1.emplace(2);
	s1.emplace(3);
	s1.emplace(4);

	s2.emplace(5);
	s2.emplace(6);
	s2.emplace(7);
	s2.emplace(8);

	s1.swap(s2);
	cout<<"\nAfter swap function\n";
	cout<<"s1 = ";
	while(!s1.empty()){
		cout<<s1.top()<<" ";
		//Stack Pop
		s1.pop();
	}
	cout<<"\ns2 = ";
	while(!s2.empty()){
		cout<<s2.top()<<" ";
		//Stack Pop
		s2.pop();
	}


	return 0;
}
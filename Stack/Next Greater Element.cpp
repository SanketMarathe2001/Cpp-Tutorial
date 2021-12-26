#include<bits/stdc++.h>
using namespace std;

void nge(int arr[],int n){
	stack<int> s;
    int res[n];
    for (int i = n - 1; i >= 0; i--) {
        /* if stack is not empty, then
        pop an element from stack.
        If the popped element is smaller
        than next, then
        a) print the pair
        b) keep popping while elements are
        smaller and stack is not empty */
        if (!s.empty()) {
            while (!s.empty() && s.top() <= arr[i]) {
                s.pop();
            }
        }
        res[i] = s.empty() ? -1 : s.top();
        s.push(arr[i]);
    }
    for (int i = 0; i < n; i++)
        cout << arr[i] << " --> " << res[i] << endl;
}

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	nge(arr,n);
	return 0;
}

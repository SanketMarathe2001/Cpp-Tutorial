#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets(vector<int>& nums) {
    int n = nums.size();
    int subset_ct = (1<<n);
    vector<vector<int>> subsets;
    for(int i = 0; i<subset_ct; ++i){
        vector<int> subset;
        for(int j=0;j<n;j++){
            if((i&(1<<j))!=0)
            subset.push_back(nums[j]);
        }
        subsets.push_back(subset);
    }
    return subsets;
}

int main() {
	//Subset generation using bitmasking
	int n;
	cin>>n;
	vector<int> v(n);
	for(int i=0;i<n;i++)
	 cin>>v[i];
	auto allsubset = subsets(v);
	for(auto subset : allsubset){
	    for(int ele : subset){
	        cout<<ele<<" ";
	    }
	    cout<<endl;
	} 
	return 0;
}

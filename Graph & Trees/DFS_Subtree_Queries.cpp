#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;
vector<int> graph[N];
int subtree_sum[N];
int even[N];
// Subtree Sum and Even count

void dfs(int vertex,int par=0){
	//Take action on vertex after entering the vertex
	if(vertex%2==0) even[vertex]++;
	subtree_sum[vertex]+=vertex;
	for(int child : graph[vertex]){
		//Take action on child before entering the child node
		if(child == par) continue;
		
		dfs(child,vertex);
		subtree_sum[vertex] += subtree_sum[child];
		even[vertex] += even[child];
		//Take action on child after existing the child node
	}
	//Take action on vertex before existing the vertex
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n-1;i++){
		int v1,v2;
		cin>>v1>>v2;

		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	int q;
	dfs(1);
	for(int i=1;i<=n;i++){
		cout<<subtree_sum[i]<<" "<<even[i]<<endl;
	}
	// while(q--){
	// 	int v;
	// 	cin>>v;
	// 	cout<<subtree_sum[v]<<" "<<even[N]<<endl;

	// }
	return 0;
}
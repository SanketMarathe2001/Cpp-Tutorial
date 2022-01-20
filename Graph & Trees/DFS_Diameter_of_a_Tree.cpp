#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;

vector<int> graph[N];
int depth[N];

void dfs(int vertex,int par=-1){
	//Take action on vertex after entering the vertex
	for(int child : graph[vertex]){
		//Take action on child before entering the child node
		if(child == par) continue;
		depth[child] = depth[vertex] + 1; 
		dfs(child,vertex);
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
	dfs(1);
	int mx_depth = -1;
	int mx_d_node;
	for(int i=1;i<=n;++i){
		if(mx_depth<depth[i]){
			mx_depth = depth[i];
			mx_d_node =i;
		}
		depth[i]=0;
	}

	dfs(mx_d_node);
	mx_depth = -1;
	for(int i=1;i<=n;++i){
		if(mx_depth<depth[i]){
			mx_depth = depth[i];
		}
	}
	cout<<mx_depth<<endl;
	return 0;
}
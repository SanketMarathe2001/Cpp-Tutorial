#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;

vector<int> graph[N];
bool vis[N];

bool dfs(int vertex,int par){
	//Take action on vertex after entering the vertex
	vis[vertex] = true;
	bool isLoopExists = false;
	for(int child : graph[vertex]){
		//Take action on child before entering the child node
		if(vis[child] && child == par) continue;
		if(vis[child]) return true;
		isLoopExists |= dfs(child,vertex);
		//Take action on child after existing the child node
	}
	//Take action on vertex before existing the vertex
	return isLoopExists;
}

int main(){
	int n,m;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int v1,v2;
		cin>>v1>>v2;

		graph[v1].push_back(v2);
		graph[v2].push_back(v1);
	}
	bool isLoopExists=false;
	for(int i=1;i<=n;i++){
		if(vis[i]) continue;
		if(dfs(i,0)){
			isLoopExists = true;
			break;
		}
	}
	cout<<isLoopExists<<endl;

	return 0;
}
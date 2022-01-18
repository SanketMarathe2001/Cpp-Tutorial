#include<bits/stdc++.h>
using namespace std;

const int N=1e5+10;

vector<int> graph[N];
bool vis[N];

vector<vector<int>> cc;
vector<int> currect_cc;

void dfs(int vertex){
	//Take action on vertex after entering the vertex
	vis[vertex] = true;
	currect_cc.push_back(vertex);
	for(int child : graph[vertex]){
		//Take action on child before entering the child node
		if(vis[child]) continue;
		dfs(child);
		//Take action on child after existing the child node
	}
	//Take action on vertex before existing the vertex
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
	int c=0;
	for(int i=1;i<=n;i++){
		if(vis[i]) continue;
		currect_cc.clear();
		dfs(i);
		cc.push_back(currect_cc);
		c++;
	}
	cout<<c<<endl;
	for(auto c_cc: cc){
		for(int vertex : c_cc){
			cout<<vertex<<" ";
		}
		cout<<endl;
	}

	return 0;
}
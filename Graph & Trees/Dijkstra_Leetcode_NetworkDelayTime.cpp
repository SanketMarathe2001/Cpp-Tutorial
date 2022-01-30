class Solution {
public:
    // const int N=1e2+10;
    // const int INF=1e9+10;
    int dijistra(int source,int n,vector<pair<int,int>>g[n+1]){
        vector<int>vis(n+1,0),dis(n+1,INT_MAX);
        set<pair<int,int>>st;//st.first is the distance which will be in sorted order bcoz set is taken
        st.insert({0,source});
        dis[source]=0;
        while(st.size()){
            auto node=*st.begin();
            int v=node.second;
            int dist=node.first;
            st.erase(st.begin());//bcoz once pair is taken out it means that node distance is minimum and we have to erase it;
            if(vis[v])
                continue;
            vis[v]=1;
            for(auto child:g[v]){
                int child_v=child.first;
                int wt=child.second;
                if(dis[v]+wt<dis[child_v]){
                    dis[child_v]=dis[v]+wt;
                    st.insert({dis[child_v],child_v});
                }
            }
        }
        int ans=0;
        for(int i=1;i<=n;i++){//nodes are given from 1 to n;
            if(dis[i]==INT_MAX)
                return -1;
            ans= max(ans,dis[i]);//if the signal reaches the max distnace node it means that all nodes have been covered means signal has reached to all nodes
        }
        return ans;
        
    }
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<pair<int,int>>g[n+1];
        for(auto vec:times){
            g[vec[0]].push_back({vec[1],vec[2]});//creating a directed graph with edges
        }
        return dijistra(k,n,g);
        
        
    }
};
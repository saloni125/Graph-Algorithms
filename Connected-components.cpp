#include <bits/stdc++.h>
using namespace std;
vector<bool>vis={false};
vector<int> graph[10001];
void dfs1(int node)
{
	vis[node]=true;
	for(auto x:graph[node])
	{
		if(vis[x]==false)
			dfs1(x);
	}
}
int dfs(int v,int cnt)
{
	for(int i=0;i<v;i++)
	{
		if(vis[i]==false)
		{
			dfs1(i);
			cnt++;
		}		
	}
	return cnt;
}
int main(){
	int v,e,src,des;
    cin >> v >> e;
    
    while(e--){
        cin >> src >> des;
        graph[src].push_back(des);
	graph[des].push_back  (src);
    }
	 int cnt=0;
    int ans= dfs(v,cnt);
	cout<<ans;
   
}

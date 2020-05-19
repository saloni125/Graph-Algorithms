#include <bits/stdc++.h>
using namespace std;
vector<bool>vis={false};
vector<int> graph[10001];
void dfs1(int x)
{
	vis[x]=true;
	cout<<x<<" ";
	for(auto i:graph[x])
	{
		if(vis[i]==false)
			dfs1(i);
	}
}
void dfs(int v)
{
	
	for(int i=0;i<v;i++)
	{
		if(vis[i]==false)
			dfs1(i);
	}
}
int main(){
	int v,e,src,des;
    cin >> v >> e;
    
    while(e--){
        cin >> src >> des;
        graph[src].push_back(des);
		graph[des].push_back(src);
    }
     dfs(v);
   
}

#include <bits/stdc++.h>
using namespace std;
vector<bool>vis={false};
vector<int> graph[10001];
stack<int>st;
void topological_sort(int node)
{
	vis[node]=true;
	for(auto x:graph[node])
	{
		if(vis[x]==false)
			topological_sort(x);
	}
	st.push(node);
}
void dfs(int v)
{
	for(int i=0;i<v;i++)
	{
		if(vis[i]==false)
			topological_sort(i);
	}
}
int main(){
	int v,e,src,des;
    cin >> v >> e;
    
    while(e--){
        cin >> src >> des;
        graph[src].push_back(des);//ONLY FOR DIRECTED ACYCLIC GRAPH
	//graph[des].push_back(src);
    }
	
     dfs(v);
	while(!st.empty())
	{
		cout<<st.top()<<" ";
		st.pop();
	}
   
}

#include <bits/stdc++.h>
using namespace std;
vector<bool>vis={false};
vector<int> graph[10001];

void bfs(int src)
{
	queue<int>q;
	q.push(src);
	vis[src]=true;
	while(!q.empty())
	{
		int x=q.front();
		cout<<x<<" ";
		q.pop();
		for(auto i:graph[x])
		{
			if(vis[i]==false)
			{
				q.push(i);
				vis[i]=true;
			}
			
		}
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
     bfs(0);//breadth first search from node "0"
   
}

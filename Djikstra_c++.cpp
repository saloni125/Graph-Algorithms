#include <bits/stdc++.h>
using namespace std;
vector<bool>vis={false};
vector<pair<int,int>> graph[10001];

int dijkstra(int src,int v)
{
	priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
	vector<int>dist(v,INT_MAX);
	pq.push({0,src});
	dist[src]=0;
	while(!pq.empty())
	{
		pair<int,int>p=pq.top();
		pq.pop();
		int w=p.first;
		int u=p.second;
		for(auto x:graph[u])
		{
			int v=x.first;
			int w1=x.second;
			if(dist[v]>dist[u]+w1)
			{
				dist[v]=dist[u]+w1;
				pq.push({dist[v],v});
			}
				
		}
	}
	for(int i=0;i<v;i++)
	{
		cout<<dist[i]<<" ";
	}
						  			 
					 
}
int main(){
	int v,e,src,des,w;
    cin >> v >> e;
    
    while(e--){
        cin >> src >> des>>w;
        graph[src].push_back({des,w});
		graph[des].push_back({src,w});
    }
	dijkstra(0,v);//Source is node 0 means finding shortest distance of all from node 0
   
}

// G-2. Graph Representation in C++ | Two Ways to Represent

#include<bits/stdc++.h>
using namespace std;

// matrix/grid
void grid(){
	int n, m;
	cin >> n >> m;
	int adj[n+1][m+1];
	for(int i=0; i<m; ++i){
		int u, v;
		cin >> u >> v;
		adj[u][v];
		adj[v][u];
	}
}

// adjacency list
void adjacency_list(){
	int n, m;
	cin >> n >> m;
	vector<int> adj[n+1];
	for(int i=0; i<m; +i){
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
}

// weighted graph
void weighted_graph(){
	int n, m;
	cin >> n >> m;
	vector<pair<int, int>> w_graph[m+1];
	for(int i=0; i<m; ++i){
		int u, v, wt;
		cin >> u >> v >> wt;
		w_graph[u].push_back({v, wt});
		w_graph[v].push_back({u, wt});
	}
}

int main(){
	grid();
	adjacency_list();
	weighted_graph();
}
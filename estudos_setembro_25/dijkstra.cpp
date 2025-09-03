#include <bits/stdc++.h>
using namespace std;
#define ll long long

#define N 100000
#define INF 0x3f3f3f3f3f3f3f3fLL


struct State {
	int u;
	ll d;
	
	bool operator < (const State &b) const {
		return d > b.d;
	}
};

vector<pair<int, ll>> g[N + 1];

ll dist[N + 1];
bool spt[N+ 1];
int V;
int parent[N + 1];

void printpath(int u){
	if(parent[u] != 0){
		printpath(parent[u]);
	}
	printf("%d ", u);
}

void dijkstra(int s){

	priority_queue<State> pq;
	memset(dist, 0x3f, sizeof(dist));
	memset(spt, 0, sizeof(spt));
	

	dist[s] = 0;

	pq.push({s, dist[s]});
	while(!pq.empty()){
		int u = pq.top().u;
		pq.pop();

		if(spt[u]) continue;

		spt[u] = true;
		
		for(int i = 0; i < g[u].size(); i++){
			int v = g[u][i].first;
			int w = g[u][i].second;

			if(!spt[v] && dist[u] + w < dist[v]){
				dist[v] = dist[u] + w;
				pq.push({v, dist[v]});
				parent[v] = u;
			}
		}
	}
}


int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	
	while(m--){
		int u, v;
		ll w;
		cin >> u >> v >> w;
	
		g[u].push_back({v, w});
		g[v].push_back({u, w});
	}

	dijkstra(1);

	if(dist[n] == INF){
		printf("-1\n");
		return 0;
	}
	printpath(n);

	return 0;
}

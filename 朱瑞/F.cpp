#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <algorithm>

using namespace std;


const int N =110;

int n,m;
int dist[N];
bool st[N];
int g[N][N];

int dijkstra()
{
	memset(dist,0x3f,sizeof dist);
	memset(st,0,sizeof st);
	dist[1]=0;
	for(int i=0;i<n;i++)
	{
		int t = -1;
		for(int j=1;j<=n;j++)
		{
			if(!st[j] && (t==-1) || dist[t]>dist[j])
				t=j;
		}
		st[t]=true;
		for(int j=1;j<=n;j++)
			dist[j]=min(dist[j],dist[t]+g[t][j]);
	}
	return dist[n];
}

int main(int argc, char const *argv[])
{
	cin>>n>>m;
	while(m!=0 && n!=0)
	{
		memset(g,0x3f,sizeof g);
		for(int i=0;i<m;i++)
		{
			int a,b,c;
			cin>>a>>b>>c;
			g[a][b]=c;
			g[b][a]=c;
		}
		int u = dijkstra();
		cout<<u<<endl;
		cin>>n>>m;
	}
	return 0;
}
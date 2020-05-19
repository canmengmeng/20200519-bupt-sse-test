#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>

using namespace std;
#define min(a,b) (((a)<(b))?(a):(b))

int main(){
	
	int n, m; 
	while(cin >> n >> m){
		int map[100][100] = {0};
		int back[100] = {0};
		int len[100];
//		for( int i = 0; i < 100; i++ ) len[i] = ;
		len[0] = 0;
		
		if(n==0 && m==0) break;
		for( int i = 0; i < m; i++ ){
			int a, b, c;
			cin >> a >> b >> c;
			map[a-1][b-1] = c;
			map[b-1][a-1] = c;
		}
		
		queue<int> q;
		q.push(0);
		while(!q.empty()){
			int pos = q.front(); q.pop();
			for( int i = 0; i < n; i++ ){
				if(map[pos][i]){
					if(!len[i]){
						len[i] = len[pos] + map[pos][i];
						q.push(i);
					} else if( len[i] > len[pos] + map[pos][i]){
						len[i] = len[pos] + map[pos][i];
						q.push(i);
					}
				}
			}
		}
		cout << len[n-1] << endl;
	}
		
	
}

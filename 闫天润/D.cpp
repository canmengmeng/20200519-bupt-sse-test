#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

#define max(a,b) (((a)>(b))?(a):(b))

int main(){
	int map[100][100] = {0};
	int c, n; cin >> c;
	while( c-- ){
		cin >> n;
		for( int i = 0; i < n; i++ ){
			for( int j = 0; j < i+1; j++ )
				cin >> map[i][j];
		}
		for( int i = n-2; i >= 0; i -- ){
			for( int j=0; j <= i; j++)
				map[i][j] += max(map[i+1][j], map[i+1][j+1]);
		}
		cout << map[0][0] << endl;
	}
}

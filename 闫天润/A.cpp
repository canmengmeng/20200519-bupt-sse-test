#include <iostream> 
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>

using namespace std;

int main(){
	int m, n;
	int sum[1000] = {0};
	for( int i = 100; i <= 999; i++ ){
		int a, b, c;
		a = i / 100;
		b = (i / 10) % 10;
		c = i % 10;
		if( i == a*a*a + b*b*b + c*c*c ){
			sum[i] = sum[i-1] + 1;
//			cout << i << " ";	
		} else
			sum[i] = sum[i-1];
	}
//	cout << endl;
	while(cin >> m >> n){
		int su = 0;
		for( int i = m; i <= n; i++ ){
			int a, b, c;
			a = i / 100;
			b = (i / 10) % 10;
			c = i % 10;
			if( i == a*a*a + b*b*b + c*c*c ){
				su++;
				cout << ((su==1)?"":" ") << i;	
			} 
		}
		if( su == 0 )
			cout << "no";
		cout << endl;
//		if( n < m )
//			cout << 0 << endl;
//		else if(sum[m] == sum[m-1])
//			cout << sum[n] - sum[m] << endl;
//		else
//			cout << sum[n] - sum[m] + 1 << endl;
	}
}

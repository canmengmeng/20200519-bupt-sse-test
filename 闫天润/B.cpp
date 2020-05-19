#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <string>

using namespace std;

int main(){
	string str="0123456789ABCDEF";
	int n, r;
	while( cin >> n >> r ){
		string ans = "";
		bool neg = n < 0;
		if( neg ) n = -n;
		while(n){
			ans = str[n % r] + ans;
			n /= r;
		}
		if( neg ) cout << "-";
		cout << ans << endl;
	}
	
}

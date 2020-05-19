#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <stack>
#include <queue>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main(){
	int tree[257]={0};
	int n;
	string s;
	char str[10];
	while( cin >> s ){
		if(s=="()") break;
		sscanf(s.c_str(), "(%d,%s)", &n, str);
		int len = strlen(str);
		cout << n << str << endl;
		int add = 1;
		for( int i = 0; i < len; i++ ){
			add = add*2 + str[i] == 'R';
		}
		tree[add] = n;
	}
	for( int i = 1; i <= 256; i++ )
		if(tree[i])
			cout << tree[i] << " ";
}

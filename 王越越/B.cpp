#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

const char arrR[] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
long long N;
int R;
	
string trans(){
	string ans = "";
	int flag = 1;
	
	if(N<0){
		flag = -1;
		N = -N;
	}
	
	while(N!=0){
		ans.insert(ans.begin(),arrR[N%R]) ;
		N/=R;
	}
	
	if(flag == -1)
		ans.insert(ans.begin(),'-');
		
	return ans;
}

int main(){
	while(scanf("%lld%d",&N,&R) != EOF){
		cout<<trans()<<endl;	
	}	
	
	return 0;
}

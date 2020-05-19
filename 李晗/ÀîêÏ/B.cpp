#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;

int main(){
	char a[16]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	int n,m,i,j,k,l;
	while(cin>>n>>m){
		int h=0;
		char b[100];
		memset(b,0,sizeof(b));
		if(n<0){
			n=-n;
			h=1;
		}
		i=0;
		while(n>0){
			l=n%m;
			b[i++]=a[l];
			n/=m;
		}
		if(h=1){
			cout<<"-";
		}
		for(i=i-1;i>=0;i--){
			printf("%c",b[i]);
			cout<<endl;
		}
	}
	return 0;
} 

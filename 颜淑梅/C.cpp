#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(){
	int n;
	while(cin>>n&&n){
		int cnt[1000];
		if(n<=4)
			printf("%d\n",n);
		else{
			for(int i=1;i<=4;i++)
				cnt[i]=1;
			for(int i=5;i<=n;i++){	
				cnt[i]=i+i-4;
			}
			cout<<cnt[n]<<endl;
		}
		
	}
}

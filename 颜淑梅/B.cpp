#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(){
	int n,r;
	while(cin>>n>>r){
		int a[1000];
		if(n<0){
			printf("-");
			n=-n;
		}
		int c=0;
		while(n){
			a[c]=n%r;
			n/=r;
			c++;
		}
			for(int i=c-1;i>=0;i--){
				if(a[i]<10){
					printf("%d",a[i]);
				}else{
					printf("%c",'A'+a[i]-10);
				}
			}
		cout<<endl;
	}
}

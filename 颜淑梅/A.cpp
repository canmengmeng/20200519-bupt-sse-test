#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

int main(){
	int m,n;
	while(cin>>m>>n){
		bool f=false;
		for(int i=m;i<=n;i++){
			int num=i;
			int a=i%10;
			i/=10;
			int b=i%10;
			i/=10;
			int c=i;
			if(a*a*a+b*b*b+c*c*c==num){
				f=true;
				//printf("%d ",num);
			}
		}
		if(f==false)
			printf("no");
		printf("\n");
	}
}

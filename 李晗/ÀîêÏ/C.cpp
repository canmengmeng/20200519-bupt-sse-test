#include<iostream>
using namespace std;

int main(){
	int temp,count,n,age[4];
	while((cin>>n)&&n!=0){
		age[1]=age[2]=0;
		age[3]=1;
		count=1;
		for(int i=2;i<=n;i++){
			temp=age[3];
			count+=temp;
			age[3]=age[3]+age[2];
			age[2]=age[1];
			age[1]=temp;
			
					}
					cout<<count<<endl;
	}
	return 0;
}

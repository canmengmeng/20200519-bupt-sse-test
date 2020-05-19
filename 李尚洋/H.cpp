#include<iostream>
using namespace std;

int check(int a){
	int sum=0;
	for(int i=1;i<=a/2;i++){
		if(a%i==0){
			sum+=i;
		} 
	}
	return sum;
}

int main(){
	
	int a,b;
	int n;
	while(cin>>n){
		while(n--){
			cin>>a>>b;
		if(check(a)==b&&check(b)==a){
			cout<<"YES"<<endl;
		}else{
			cout<<"NO"<<endl;
		}
		}
		
	}
	
	return 0;
} 

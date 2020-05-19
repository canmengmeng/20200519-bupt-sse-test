#include<iostream>
#include<cmath> 
using namespace std;
bool check(int n){
	int c=n;
	int a=n/100;n=n%100;
	int b=n/10;n=n%10;
	if(pow(a,3)+pow(b,3)+pow(n,3)==c){
		return true;
	}
	return false;
}
int main(){
	
	int a,b;
	while(cin>>a>>b){
		int n=0;
		for(int i=a;i<=b;i++){
			if(check(i)==true){
				if(n!=0){
					cout<<" ";
				}
				cout<<i;
				n++;
			}
		}
		if(n==0){
			cout<<"no";
		}
		cout<<endl;
	}
	
	return 0;
} 

#include<iostream>
using namespace std;

int main(){
	
	int n;
	while(cin>>n){
		if(n==0){
			return 0;
		}
		if(n<=4){
			cout<<n<<endl;
		}else{
			int a[4];
			a[0]=1;a[1]=1;a[2]=1;a[3]=1;
			for(int i=5;i<=n;i++){
				a[0]=a[0]+a[3];
				a[3]=a[2];
				a[2]=a[1];
				a[1]=a[0];
			}
			cout<<a[0]+a[1]+a[2]+a[3]<<endl;
		} 
	} 
	
	return 0;
} 

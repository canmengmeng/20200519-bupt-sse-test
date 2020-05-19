//应该是上显问题 
//还没过 
#include<iostream>
#include<cmath>
#include<string.h>
using namespace std;

int main(){
	
	long long n;
	int r;
	int a[150];
	while(cin>>n>>r){
		bool flag=false;
		if(n<0){
			flag=true;
		}
		n=abs(n);
		if(n==0){
			cout<<n<<endl; 
		}else{
				char b[5]={'A','B','C','D','E'};
			memset(a,0,sizeof(a));
			int i=0;
			while(n>=0){
				a[i]=n%r;n=n/r;i++;
			}
			if(flag==true){
				cout<<"-";
			}
			for(int j=i-1;j>=0;j--){
				if(a[j]>9){
					cout<<b[a[j]-10];
				}else{
					cout<<a[j];
				}
			}
			cout<<endl;
		}
		
	}
	
	return 0;
} 

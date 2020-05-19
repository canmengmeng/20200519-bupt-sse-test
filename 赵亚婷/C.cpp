#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	//int a[60];
	int b[60];
	int i=0;
	while(cin>>n){
		if(n==0) break;
		else if(0<n<=4){
			b[i]=n;
			i++;
		}
		else{
		 int k=n%4;
		 int sum=4;
		 for(int j=1;j<=k;j++){
		 	sum=sum+j;
		 	b[i]=sum;
		 	i++;
		 }	
		}
	}
    for(int m=0;m<n-1;i++){
		cout<<b[m]<<endl;
	}
	return 0;
}

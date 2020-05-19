#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	cin>>n;
	int b[1000];
	int t=0;
	int sum=0;
	int logo1,logo2;
	int a[1000][2];
	for(int i=0;i<n;i++)
	   for(int j=0;j<2;j++)
	     cin>>a[i][j];
    for(int k=0;k<n;k++){
    	for(int s=2;s<a[k][0];s++){
    		if(a[k][0]%s==0){
    			int temp=a[k][0]%s;
    			b[t]=temp;
    			t++;
			}
	        for(int y=0;y<t;y++){
	          sum=sum+b[y];
			} 
			if(sum==a[k][1]) logo1=1;
			else logo1=0;
		}
		for(int s=2;s<a[k][1];s++){
    		if(a[k][1]%s==0){
    			int temp=a[k][1]%s;
    			b[t]=temp;
    			t++;
			}
	        for(int y=0;y<t;y++){
	          sum=sum+b[y];
			} 
			if(sum==a[k][0]) logo2=1;
			else logo2=0;
		}
	}
	if(logo1==logo2==1) cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
	return 0;
}

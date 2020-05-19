#include <iostream>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a[20];
	for(int i=0;i<20;i++){
		cin>>a[i];
	}
	for(int j=0;j<a.length;j=j+2){
		int b[20];
		char c[20];
		int m=0;
		int k=0;
		while(a[j]/a[j+1]!=0){
			int s=a[j]/a[j+1];
			b[m++]=s;
			int y=a[j]%a[j+1];
			if(y=10)
			  
			c[k++]=y;
		}
	}
	return 0;
}

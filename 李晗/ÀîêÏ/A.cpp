#include<iostream>
using namespace std;

int main(){
int n,m,i,temp,a,b,c,flag;
while(scanf("%d%d",&m,&n)!=EOF){
	flag=0;
	if(m>n){
		temp=m;
		m=n;
		n=temp;
	}
	for(i=m;i<=n;i++){
		a=i/100;
		b=i%100/10;
		c=i%10;
		if(i==a*a*a+b*b*b+c*c*c){
			flag++;
			if(flag==1){
				printf("%d",i);
			}
			else printf(" %d",i);
		}
		
	}
	if(flag==0){
			printf("no\n");
		}
}
return 0;
}

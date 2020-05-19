#include<iostream>
int app_number(int n){
	int sum=0;
	for(int i;i<=n/2;i++){
		if(n%i==0){
			sum+=i;
		}
		
	}
	return sum;
}
int main(){
	int m=0;
	int a=0;
	int b=0;
	while(m--)
	{
		int sum1=0;
		int sum2=0;
		scanf("%d%d",&a,&b);
		sum1=app_number(a);
		sum2=app_number(b);
		if(sum1==b&&sum2==a){
			printf("YES\n");
		}
		else printf("NO\n");
	}
	return 0;
}

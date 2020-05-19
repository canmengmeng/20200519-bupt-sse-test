#include<cstdio>

bool isF(int n){
	int a,b,c;
	a = n/100;
	b = n%100/10;
	c = n%10;
	
	if(a*a*a + b*b*b + c*c*c == n)
		return true;
	else
		return false;
}

int main(){
	int m,n;
	int flag = 0;
	
	while(scanf("%d%d",&m,&n)!=EOF){
		flag = 0;
		for(int i=m;i<=n;i++){
			if(isF(i)){
				if(flag == 0)
					printf("%d",i);
				else
					printf(" %d",i);
				flag = 1;		
			}
		}
		if(flag == 0)
			printf("no");
			
		printf("\n");
	}
	
	return 0;
}

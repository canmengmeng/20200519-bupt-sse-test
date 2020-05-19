#include<cstdio>
#include<vector>
using namespace std;

int fun(int n){
	vector<int> vi;
	
	for(int i=2;i<n;i++){
		if(n%i == 0){
			vi.push_back(i);
		}
	}
	
	int sum = 1;
	for(int i=0;i<vi.size();i++){
		sum += vi[i];
	}
	return sum;
}

int main(){
	int M,A,B;
	scanf("%d",&M);
	
	while(M--){
		scanf("%d%d",&A,&B);
		
		if((fun(A) == B) && (fun(B) == A))
			printf("YES\n");
		else
			printf("NO\n");
	}
	
	return 0;
}

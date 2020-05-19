#include<cstdio>
#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;

struct cow{
	int year;
	int child;
}Cow;

int main(){
	int n,count;
	vector<cow> vi;
	
	Cow.year = 1;
	Cow.child = 0;
	vi.push_back(Cow);
		
	while(scanf("%d",&n),n){
		while(n--){
			//原始母牛生的小母牛 
			Cow.year = 0;
			Cow.child = 0;
			vi.push_back(Cow);
			vi[0].child ++;
			
			//else cows
			for(int i=1;i<vi.size();i++){
				vi[i].year++;
				if(vi[i].year >= 4){
					vi[i].child ++;
					
					Cow.year = 0;
					Cow.child = 0;
					vi.push_back(Cow);
				}
			}
		}
		
		count = 0;
		for(int i=0;i<vi.size();i++){
			count += vi[i].child;
		}
		vi.clear();
		printf("%d\n",count);
	}
	
	return 0;
}

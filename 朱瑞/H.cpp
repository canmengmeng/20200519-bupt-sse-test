#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>
#include <vector>

using namespace std;

bool f(int a,int b)
{
	vector<int> va;
	vector<int> vb;
	int suma=0,sumb=0;
	for(int i=1;i<a;i++)
	{
		if(a%i==0) va.push_back(i); 
	}
	for(int i=1;i<b;i++)
		if(b%i==0) vb.push_back(i);
	for(int i=0;i<va.size();i++)
		suma+=va[i];
	for(int i=0;i<vb.size();i++)
		sumb+=vb[i];
	return (suma==b) && (sumb==a);
}

int main(int argc, char const *argv[])
{
	int T;
	cin>>T;
	while(T--)
	{
		int a,b;
		cin>>a>>b;
		if(f(a,b)) puts("YES");
		else puts("NO");
	}
	return 0;
}
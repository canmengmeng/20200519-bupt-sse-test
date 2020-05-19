#include <iostream>
#include <cstring>
#include <cstdlib>
#include <string>

using namespace std;


bool f(int n)
{
	int a=n%10;
	int b=n/10%10;
	int c=n/100%10;
	if(a*a*a+b*b*b+c*c*c==n) return true;
	return false;
}

int main(int argc, char const *argv[])
{
	int m,n;
	while(cin>>m>>n)
	{
		bool flag=false;
		for(int i=m;i<n+1;i++)
		{
			if(f(i)) {flag=true;cout<<i;}
		}
		if(flag==false) cout<<"no";
		cout<<endl;
	}
	return 0;
}
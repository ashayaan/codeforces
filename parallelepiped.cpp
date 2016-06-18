#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int main(){
	long long int a,b,c;
	cin>>a>>b>>c;
	long long int total;
	total=sqrt(a*b*c);
	long long int ans=4*((total/a)+(total/b)+(total/c));
	cout<<ans<<endl;
	return 0;
	}

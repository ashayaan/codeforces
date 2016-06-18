#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int temp=0,cost=0,min=1e6;
	while(n >= 0){
		cost=n*a+temp*b;
		if(cost < min)
			min=cost;
		temp+=1;
		n-=m;
		}
	cost=temp*b;
	if(cost<min)
		min=cost;
	cout<<min<<endl;
	return 0;
	}

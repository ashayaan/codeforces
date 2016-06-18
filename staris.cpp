#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int x=-1;
	int i=0;
	int temp;
	if(n%2 == 0)
		temp=n/2;
	else
		temp=(n+1)/2;
	for(i=temp;i<=n;i+=1){
		if(i%m == 0){
			x=i;
			break;
			}
		}
	cout<<x<<endl;
	return 0;
	}

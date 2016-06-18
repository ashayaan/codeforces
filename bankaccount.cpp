#include <bits/stdc++.h>

using namespace std;

int main(){
	long long int bal;
	cin>>bal;
	if(bal >= 0){
		cout<<bal<<endl;
		}
	else{
		long long int end=bal%10;
		long long int n=bal;
		long long int min= -1e18;
		n=n/10;
		if( n > min)
			min=n;
		n=n/10;
		n=n*10-abs(end);
		if( n > min)
			min=n;
		cout<<min<<endl;
		}
	return 0;	
	}

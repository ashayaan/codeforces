#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	long long int y,k,n;
	cin>>y>>k>>n;
	if(y >= n){
		cout<<"-1"<<endl;
		return 0;
		}
	long long int num=y%k;
	long long int x=k-num;
	if((x+y) > n){
		cout<<"-1"<<endl;
		return 0;
		}
	for(;(x+y)<=n;x+=k){
		cout<<x<<" ";
		}
	cout<<endl;
	return 0;
	}

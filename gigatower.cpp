#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

bool contains(long long int n){
	int temp;
	n=abs(n);
	while(n!=0){
		temp=n%10;
		if(temp == 8)
			return true;
		n/=10;
		}
	return false;
	}

int main(){
	long long int n,n2;
	cin>>n;
	n2=n;
	bool flag=true;
	while(flag){
		n+=1;
		if(contains(n)){
			break;
			}
		}	
	cout<<n-n2<<endl;
	return 0;
	}

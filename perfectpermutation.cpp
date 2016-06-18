#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	if(n%2 != 0){
		cout<<"-1"<<endl;
		return 0;
		}
	cout<<"2"<<" "<<"1";
	int i=0;
	for(i=3;i<n;i+=2){
		cout<<" "<<i+1<<" "<<i;
		}
	cout<<endl;
	return 0;
	}
	

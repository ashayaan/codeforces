#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main(){
	long long int a,b;
	cin>>a;
	cin>>b;
	bool flag=false;
	long long int i=0;
	long long int temp=1;
	while(temp <= b){
		temp*=a;
		i+=1;
		if(temp == b){
			flag = true;
			break;
			}
		}
	if(flag){
		cout<<"YES"<<endl;
		cout<<i-1<<endl;
		}
	else
		cout<<"NO"<<endl;
	
	return 0;
	}

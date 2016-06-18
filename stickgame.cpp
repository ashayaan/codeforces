#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int intersection=n*m;
	int count=0;
	while(intersection >= 1){
		n-=1;
		m-=1;
		intersection=n*m;
		count+=1;
		}
	if(count%2==0 and count > 0)
		cout<<"Malvika"<<endl;
	else
		cout<<"Akshat"<<endl;
	return 0;
	}

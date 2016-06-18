#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int a;
	int i=0,j=0;
	bool temp=false;
	for(i=0;i<n;i+=1){
		for(j=0;j<m;j+=1){
			cin>>a;
			if (a==1){
				//cout<<i<<j<<endl;
				if(i==0 or i==n-1)
					temp=true;
				else if(j==0 or j==m-1)
					temp=true;
				}
			}
		}
	if(temp)
		cout<<"2"<<endl;
	else
		cout<<"4"<<endl;
	return 0;
	}

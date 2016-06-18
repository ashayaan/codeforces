#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int count=0;
	int i=0,j=0;
	for(i=0;i<n;i+=1){
		if(i%2==0){
			for(j=0;j<m;j+=1)
				cout<<"#";
			cout<<endl;
			}
		else{
			if(count%2==0){
				for(j=0;j<m-1;j+=1)
					cout<<".";
				cout<<"#"<<endl;
				}
			else{
				cout<<"#";
				for(j=0;j<m-1;j+=1)
					cout<<".";
				cout<<endl;
				}
			count+=1;
			}
		}
	return 0;
	}

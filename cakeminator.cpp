#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	char array[n+1][m+1];
	int i,j;
	char read;
	for(i=0;i<n;i+=1){
		for(j=0;j<m;j+=1){
			cin>>read;
			array[i][j]=read;
			}
		}
	int count=0;
	int tc=0;
	for(i=0;i<n;i+=1){
		tc=0;
		for(j=0;j<m;j+=1){
			if(array[i][j] == 'S'){
				tc=0;
				break;
				}
			else
				tc+=1;
			}
		if(tc == 0)
			continue;
		else{
			for(j=0;j<m;j+=1){
				array[i][j]='E';
				}
			count+=tc;
			}
		}
	for(i=0;i<m;i+=1){
		tc=0;
		for(j=0;j<n;j+=1){
			if(array[j][i] == 'S'){
				tc=0;
				break;	
				}
			else if(array[j][i]  == 'E'){
				continue;
				}
			else
				tc+=1;
			}
		if(tc == 0)
			continue;
		else{
			for(j=0;j<n;j+=1){
				array[j][i]='E';
				}
			count+=tc;
			}
		}
	cout<<count<<endl;
	return 0;
	}
	

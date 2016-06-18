#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	char array[n][m];
	int i=0,j=0;
	for(i=0;i<n;i+=1){
		for(j=0;j<m;j+=1){
			cin>>array[i][j];
			}
		}
	for(i=0;i<n;i+=1){
		for(j=0;j<m;j+=1){
			if(array[i][j] == '.' and (((i+j)%2) == 0)){
				array[i][j]='B';
				}
			else if(array[i][j] == '.' and (((i+j)%2) !=0)){
				array[i][j]='W';
				}
			else
				continue;
			}
		}
	for(i=0;i<n;i+=1){
		for(j=0;j<m;j+=1){
			cout<<array[i][j];
			}
		cout<<endl;
		}
	return 0;
	}

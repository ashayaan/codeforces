#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int array[n][n];
	int i=0,j=0;
	for(i=0;i<n;i+=1){
		for(j=0;j<n;j+=1){
			if(i == j)
				array[i][j]=k;
			else
				array[i][j]=0;
			}
		}
	for(i=0;i<n;i+=1){
		for(j=0;j<n;j+=1){
			cout<<array[i][j]<<" ";
			}
		cout<<endl;
		}
	return 0;
	}

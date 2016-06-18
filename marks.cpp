#include<iostream>
#include<algorithm>
#include<string>
#include<cstring>
#include<vector>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	char array[n][m];
	int i=0,j=0;
	for(i=0;i<n;i+=1){
		for(j=0;j<m;j+=1)
			cin>>array[i][j];
		}
	int ans[n];
	memset(ans, 0, sizeof ans);
	int max=-1e6,index=-1;
	for(j=0;j<m;j+=1){
		max=-1e6;
		for(i=0;i<n;i+=1){
			if((int)array[i][j] >= max){
				max=(int)array[i][j];
				}
			}
		for(i=0;i<n;i+=1){
			if((int)array[i][j] == max)
				ans[i] = 1;
			}
		}
	int count=0;
	for(i=0;i<n;i+=1){
		//cout<<ans[i]<<endl;
		if(ans[i] == 1)
			count+=1;
		}
	cout<<count<<endl;
	return 0;
	}

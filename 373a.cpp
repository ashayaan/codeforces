#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	char array[4][4];
	int k;
	cin>>k;
	int i=0,j=0;
	for(i=0;i<4;i+=1){
		for(j=0;j<4;j+=1){
			cin>>array[i][j];
			}
		}
	int count[9];
	for(i=0;i<9;i+=1)
		count[i]=0;
	for(i=0;i<4;i+=1){
		for(j=0;j<4;j+=1){
			if(array[i][j] != '.'){
				count[array[i][j]-49]+=1;
				}
			}
		}
	bool flag=true;
	for(i=0;i<9;i+=1){
		if(count[i] > 2*k){
			flag=false;
			break;
			}
		}
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	}

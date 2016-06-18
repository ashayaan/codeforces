#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	int n;
	int ans=-1;
	cin>>n;
	int array[n][2];
	int i=0;
	for(i=0;i<n;i+=1){
		cin>>array[i][0]>>array[i][1];
		}
	int s1=0,s2=0;
	for(i=0;i<n;i+=1){
		s1+=array[i][0];
		s2+=array[i][1];
		}
	if(s1%2==0 and s2%2==0){
		cout<<"0"<<endl;
		return 0;
		}
	else if((s1%2==0 and s2%2!=0) or (s1%2!=0 and s2%2==0)){
		cout<<"-1"<<endl;
		return 0;
		}
	else if(s1%2!=0 and s2%2!=0){
		//cout<<"hello";
		for(i=0;i<n;i+=1){
			if((array[i][0]%2==0 and array[i][1]%2!=0) or (array[i][0]%2!=0 and array[i][1]%2==0)){
				ans=1;
				}
			}
		}
	cout<<ans<<endl;
	return 0;
	}

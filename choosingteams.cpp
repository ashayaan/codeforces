#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
	int n,k;
	cin>>n>>k;
	int array[n];
	int i=0;
	for(i=0;i<n;i+=1){
		cin>>array[i];
		}
	int count=0;
	for(i=0;i<n;i+=1){
		if((array[i]+k) <= 5)
			count+=1;
		}
	int ans=count/3;
	cout<<ans<<endl;
	}

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cin>>n;
	int i;
	int vertical[n+1],horizontal[n+1];
	for(i=0;i<=n;i+=1){
		vertical[i]=0;
		horizontal[i]=0;
		}
	int count=0;
	for(i=0;i<n*n;i+=1){
		int p,q;
		cin>>p>>q;
		if(horizontal[p] == 0 and vertical[q] == 0){
			horizontal[p]=1;
			vertical[q]=1;
			count+=1;
			cout<<count<<" ";
			}
		else{
			count+=1;
			continue;
			}
		}
	cout<<endl;
	return 0;
	}

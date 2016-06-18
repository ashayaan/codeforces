#include<bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n],b[n];
	int i=0;
	for(i=0;i<n;i+=1){
		cin>>a[i]>>b[i];
		}
	pair<int, int> pairs[n];
	for(i=0;i<n;i+=1){
		pairs[i]=make_pair(a[i],b[i]);
		}
	sort( pairs, pairs+n	);

	for(i=0;i<n;i+=1){
		a[i]=pairs[i].first;
		b[i]=pairs[i].second;
		}
	bool ans=false;
	int j=0;
	for(i=0;i<n-1;i+=1){
		if(b[i] > b[i+1]){
			ans=true;
			break;
			}
		}
	if(ans == true)
		cout<<"Happy Alex"<<endl;
	else
		cout<<"Poor Alex"<<endl;
	}

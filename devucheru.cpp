#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,d;
	cin>>n>>d;
	int i=0;
	int array[n];
	for(i=0;i<n;i+=1){
		cin>>array[i];
		}
	int nj,t;
	t=10*(n-1);
	nj=2*(n-1);
	//cout<<t<<endl;
	if(t >= d){
		cout<<"-1"<<endl;
		return 0;
		} 
	else{
		for(i=0;i<n;i+=1){
			t+=array[i];
			}
		if(t > d){
			cout<<"-1"<<endl;
			return 0;
			}
		//cout<<t<<endl;
		while(t <=d){
			t+=5;
			if(t > d)
				break;
			nj+=1;
			//cout<<t<<nj<<endl;
			}
		}
	cout<<nj<<endl;
	return 0;
	}

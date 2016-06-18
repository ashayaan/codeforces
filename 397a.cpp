
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int array[101];

int main(){
	int n;
	cin>>n;
	int x,y;
	cin>>x>>y;
	for(int i=x;i<y;i+=1)
		array[i]=1;
	n-=1;
	int tx,ty;
	for(int i=0;i<n;i+=1){
		cin>>tx>>ty;
		if(ty > y)
			ty=y;
		if(tx < x)
			tx=x;
		//cout<<tx<<" "<<ty<<endl;
		for(int j=tx;j<ty;j+=1){
			array[j]=0;
			}
	}
	//for(int i=x;i<y;i+=1)
	//	cout<<array[i]<<endl;
	int seg=0;
	for(int i=x;i<y;i+=1){
		if(array[i] == 1)
			seg+=1;
	}
	cout<<seg<<endl;
	return 0;
}

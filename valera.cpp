#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
	int n,v;
	cin>>n>>v;
	int array[n];
	int index=0,count=0;
	int i=0;
	int flag=0;
	for(i=0;i<n;i+=1){
		int stock,price;
		flag=0;
		cin>>stock;
		int j=0;
		for(j=0;j<stock;j+=1){
			cin>>price;
			if( v > price and flag==0){
				flag=1;
				count+=1;
				array[index++]=i+1;
				}
			}
		}
	cout<<count<<endl;
	for(i=0;i<count;i+=1){
		cout<<array[i]<<" ";
		}
	cout<<endl;
	return 0;
	}

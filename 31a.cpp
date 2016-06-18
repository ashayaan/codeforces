//coded by Ahmad Shayaan for codeforces
//test case number 4 is wrong
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cin>>n;
	int i=0;
	int array[n];	
	for(i=0;i<n;i+=1){
		cin>>array[i];
	}
	int j=0,k=0;
	int sum=0;
	for(i=0;i<n;i+=1){
		sum=0;
		for(j=0;j<n;j+=1){
			if(i == j)
				continue;
			for(k=0;k<n;k+=1){
				if(k == j or k == i)
					continue;
				sum = array[j]+array[k];
				//cout<<"sum is"<<sum<<" "<<i<<" "<<j<<" "<<k<<endl;
				if(sum == array[i]){
					cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
					return 0;
					}
			}
		}
	}
	cout<<"-1"<<endl;
	return 0;
}

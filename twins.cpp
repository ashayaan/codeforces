#include<iostream>
#include<stdio.h>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

vector<int> bin;

int main(){
	unsigned int n;
	cin>>n;
	int sum=0;
	unsigned int i=0;
	for(i=0;i<n;i+=1){
		int read;
		cin>>read;
		bin.push_back(read);
		sum+=read;
		}
	sort(bin.begin(),bin.end());
	reverse(bin.begin(),bin.end());
	int count=0;
	int tempsum=0;
	for(i=0;i<bin.size();i+=1){
		tempsum+=bin[i];
		count+=1;
		sum -= bin[i];
		if( (sum - tempsum) < 0)
			break;		
		}
	cout<<count<<endl;
	return 0;
	}

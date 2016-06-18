#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	int array[n][2];
	int i=0;
	int read1,read2;
	for (i=0;i<n;i+=1){
		cin>>read1>>read2;
		array[i][0]=read1;
		array[i][1]=read2;
		}
	int j=0,count=0;
	for(i=0;i<n;i+=1){
		for(j=0;j<n;j+=1){
			if(array[i][0] == array[j][1])
				count+=1;
			}
		}
	cout<<count<<endl;
	return 0;
	}

#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(){
	int n;
	cin>>n;
	int array[n];
	int i=0;
	for(i=0;i<n;i+=1){
		cin>>array[i];
		}
	int j=0,fmin=1e6;
	int compute=0;
	int max=-1e6;
	for(i=1;i<n-1;i+=1){
		max=-1e6;
		for(j=1;j<n-1;j+=1){
			if(array[i] == array[j]){
				continue;
				}
			if(array[i] == array[j+1]){
				j+=1;
				compute=array[j+1]-array[j-1];
				}
			else
				compute=array[j+1]-array[j];
			if(compute > max)
				max=compute;
			}
		if(max < fmin)
			fmin=max;
		}
	cout<<fmin<<endl;
	return 0;
	}

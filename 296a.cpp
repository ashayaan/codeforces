#include<iostream>
#include<string.h>
#include<algorithm>
#include<vector>
#include<stdio.h>


using namespace std;

int main(){
	int n;
	cin>>n;
	int array[n];
	int max=-1e6;
	int i=0;
	for(i=0;i<n;i+=1){
		cin>>array[i];
		if(array[i] > max)
			max=array[i];
		}
	int temp[max];
	for(i=0;i<max;i+=1){
		temp[i]=0;
		}
	for(i=0;i<n;i+=1){
		temp[array [i]-1]+=1;
		}
	bool flag=true;
	for(i=0;i<max;i+=1){
		if(temp[i] > (n+1)/2){
			flag=false;
			break;
			}
		}
	if(flag)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
	}

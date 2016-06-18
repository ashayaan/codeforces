#include<bits/stdc++.h>

using namespace std;

int main(){
	int s,n;
	cin>>s>>n;
	int dragon[n],bonus[n];
	int i=0;
	for(i=0;i<n;i+=1)
		cin>>dragon[i]>>bonus[i];
	int j=0;
	for(i=0;i<n;i+=1){
		for(j=0;j<n-i-1;j+=1){
			if(dragon[j] > dragon[j+1]){
				int temp;
				temp=dragon[j];
				dragon[j]=dragon[j+1];
				dragon[j+1]=temp;
				
				temp=bonus[j];
				bonus[j]=bonus[j+1];
				bonus[j+1]=temp;
				}
			}
		}
	if(s < dragon[0]){
		cout<<"NO"<<endl;
		return 0;
		}
	else{
		for(i=0;i<n;i+=1){
			if(s > dragon[i]){
				s+=bonus[i];
				continue;
				}
			else{
				cout<<"NO";
				return 0;
				}
			}
		}
	cout<<"YES"<<endl;
	return 0;
	}

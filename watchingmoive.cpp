#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int main(){
	int n,x;
	cin>>n>>x;
	int time[n][2];
	int i=0;
	for(i=0;i<n;i+=1){
		cin>>time[i][0]>>time[i][1];
		}
	long long int count=0,t=0,temp=0,sum=0;
	for(i=0;i<n;i+=1){
		sum=0;
		while(true){
			t+=x;
			if(t >= time[i][0]){
				t-=x;
				sum=(time[i][1]-t);
				t+=sum;
				break;
				}
			}
		count+=sum;
		}
	cout<<count<<endl;
	return 0;
	}

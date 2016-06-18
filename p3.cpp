#include<iostream>
#include<math.h>

using namespace std;

int main(){
	int n,k;
	cin>>n;
	cin>>k;
	int count=0;
	int num,score;
	int i=0;
	for(i=1;i<=n;i++){
		cin>>num;
		if(i<k && num>0){
			count+=1;
			continue;
			}
		else if(i==k && num>0){
			count+=1;
			score=num;
			//cout<<score<<endl;
			}
		else if(num>=score && num>0)
			count+=1;
		else 
			break;
		}
	cout<<count<<endl;
	}

#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
	
	int n;
	
	cin>>n;
	int ce=0,co=0,le=0,lo=0;
	int i=0;
	int read;
	for(i=0;i<n;i+=1){
		cin>>read;
		if(read% 2 ==0){
			ce+=1;
			le=i+1;
			}
		else{
			co+=1;
			lo=i+1;
			}
		}
	//cout<<ce<<" "<<co<<endl;
	if(ce > co )
		cout<<lo<<endl;
	else
		cout<<le<<endl;
	return 0;
	}

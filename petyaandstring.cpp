#include<iostream>
#include<stdio.h>
#include<string>

using namespace std;

int main(){
	string a,b;;
	cin>>a;
	cin>>b;
	//cout<<a<<" "<<b<<endl;
	unsigned int i=0;
	for(i=0;i<a.length();i+=1){
		a[i]=tolower(a[i]);
		b[i]=tolower(b[i]);
		}
	int ans=0;
	for(i=0;i<a.length();i+=1){
		//cout<<a[i]<<" "<<b[i]<<endl;
		if(a[i] < b[i]){
			ans=-1;
			break;
			}
		else if(a[i] > b[i]){
			ans=1;
			break;
			}
		}	
	cout<<ans<<endl;
	return 0;
	}


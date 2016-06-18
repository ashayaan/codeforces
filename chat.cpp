#include<iostream>
#include<string>

using namespace std;

int main(){
	string a;
	cin>>a;
	unsigned int i=0,count=0;
	for(i=0;i<a.length();i+=1){
		if(a[i] == 'h'){
			count+=1;
			i+=1;
			break;
			}
		}
	for(;i<a.length();i+=1){
		if(a[i] == 'e'){
			count+=1;
			i+=1;
			break;
			}
		}
	for(;i<a.length();i+=1){
		if(a[i] == 'l'){
			count+=1;
			i+=1;
			break;
			}
		}
	for(;i<a.length();i+=1){
		if(a[i] == 'l'){
			count+=1;
			i+=1;
			break;
			}
		}
	for(;i<a.length();i+=1){
		if(a[i] == 'o'){
			count+=1;
			i+=1;
			break;
			}
		}
	
	if(count == 5)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
	}

#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int reverse(int a){
	int temp;
	temp=(a%10)*10;
	a=a/10;
	temp+=a;
	return temp;
	}

int main(){
	int a;
	cin>>a;
	char bin;
	cin>>bin;
	int b;
	cin>>b;
	bool temp=false;
	int r;
	b+=1;
	while(a<24){
		r=reverse(a);
		while(b<60){
			if(b==r){
				temp=true;
				break;
				}
			else 
				b+=1;
			}
		if(temp)
			break;
		a+=1;
		b=0;
		}
	if(temp){
		if(r/10 == 0){
			if(a<10)
				cout<<"0"<<a<<":0"<<b<<endl;
			else
				cout<<a<<":0"<<r<<endl;
			}
		else{
			if(a<10)
				cout<<"0"<<a<<":"<<b<<endl;
			else
				cout<<a<<":"<<r<<endl;
			}
		}
	else
		cout<<"00:00"<<endl;
	return 0;
	}

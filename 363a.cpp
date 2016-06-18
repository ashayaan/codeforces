#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

void compute(int n){
	if((n-5) >=0){
		cout<<"-O|";
		n=n-5;
		}
	else{
		cout<<"O-|";
		}
	if(n==0)
		cout<<"-OOOO";
	else if(n==1)
		cout<<"O-OOO";
	else if(n==2)
		cout<<"OO-OO";
	else if(n==3)
		cout<<"OOO-O";
	else
		cout<<"OOOO-";
	cout<<endl;
	}

int main(){
	int n;
	cin>>n;
	int temp;
	if(n==0)
		compute(0);
	while(n>0){
		temp=n%10;
		compute(temp);
		n=n/10;
		}
	return 0;
	}

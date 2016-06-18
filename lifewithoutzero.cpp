#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<cmath>
using namespace std;

int main(){
	int a,b,c,sum=0;;
	cin>>a>>b;
	c=a+b;
	int ta=0,tc=0,tb=0;
	int temp=0,i=1;;
	while(a!=0){
		temp=a%10;
		if(temp !=0){
			ta+=temp*i;
			i=i*10;
			}
		a=a/10;
		}
	i=1;
	temp=0;
	while(b!=0){
		temp=b%10;
		if(temp!=0){
			tb+=temp*i;
			i*=10;
			}
		b=b/10;
		}
	i=1;
	temp=0;
	//cout<<c<<endl;
	while(c!=0){
		temp=c%10;
		if(temp!=0){
			tc+=temp*i;
			i*=10;
			}
		c=c/10;
		}
	//cout<<tc<<endl;
	sum=ta+tb;
	//cout<<sum<<endl;
	if(sum == tc)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
	}

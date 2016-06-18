#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int r1,r2;
	cin>>r1>>r2;
	//cout<<r1<<endl;
	int c1,c2;
	cin>>c1>>c2;
	int d1,d2;
	cin>>d1>>d2;
	int i=0;
	if(r1>18 or r2>18 or c1>18 or c2>18 or d1>18 or d2>18){
		cout<<"-1"<<endl;
		return 0;
		}
	int a,b,c,d;
	bool temp=false;
	for(i=1;i<10;i+=1){
		a=i;
		b=r1-a;
		if(b<=0 or b>=10)
			continue;
		c=c1-a;
		if(c<=0 or c>=10){
			continue;
			}
		d=d1-a;
		if(d<=0 or d>=10)
			continue;
		if(b+d==c2 and c+d==r2 and c+b ==d2){
			temp=true;
			break;
			}
		}
	if(temp and a!=b and a!=c and a!=d and b!=c and b!=d and c!=d){
		cout<<a<<" "<<b<<endl;
		cout<<c<<" "<<d<<endl;
		}
	else
		cout<<"-1"<<endl;
	return 0;
	}

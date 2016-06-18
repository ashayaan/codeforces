#include<iostream>
#include<string>
#include<vector>
#include<cmath>
using namespace std;

int main(){
	int x,y;
	cin>>x>>y;
	if( (x==0 and y==0) or (x==1 and y==0)){
		cout<<"0"<<endl;
		return 0;
		}
	int ub = max(abs(x),abs(y))*4;
	if(x>y or (x>0 and y>0 and x==y)){
		if(x>y and abs(x)<=abs(y))
			cout<<ub<<endl;
		else if(x>0 and y<0 and abs(x)-abs(y) == 1)
			cout<<ub-4<<endl;
		else
			cout<<ub-3<<endl;
		}
	else{
		if(x<y and abs(x)<=abs(y))
			cout<<ub-2<<endl;
		else
			cout<<ub-1<<endl;
		}
	
	return 0;
	}

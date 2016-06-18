#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int a,b,r;
	cin>>a>>b>>r;
	int win=0;
	int dia=2*r;
	if((a-dia)>=0 and (b-dia)>=0)
		cout<<"First"<<endl;
	else
		cout<<"Second"<<endl;
	return 0;
}

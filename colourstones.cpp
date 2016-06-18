#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
	string a,b;
	cin>>a;
	cin>>b;
	int pos=0;
	int i=0;
	for(i=0;i<b.length();i+=1){
		if(b[i] == a[pos])
			pos+=1;
		}
	cout<<pos+1<<endl;
	return 0;
	}

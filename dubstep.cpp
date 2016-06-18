#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	string x;
	cin>>x;
	int i=0;
	while(i<x.length()){
		if(x[i] == 'W' and x[i+1] == 'U' and x[i+2] == 'B'){
			i+=3;
			continue;
			}
		else{
			cout<<x[i];
			if(x[i+1] == 'W' and x[i+2] == 'U' and x[i+3] == 'B')
				cout<<" ";
		}
		i+=1;
		}
	cout<<endl;
	return 0;
	}

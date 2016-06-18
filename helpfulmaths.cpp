#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

vector<char> bin;

int main(){
	string a;
	cin>>a;
	unsigned int i=0;
	for(i=0;i<a.length();i+=1){
		if(a[i] != '+')
			bin.push_back(a[i]);
		}
	sort(bin.begin(),bin.end());
	for(i=0;i<bin.size()-1;i+=1)
		cout<<bin[i]<<"+";
	cout<<bin[i]<<endl;
	return 0;
	}

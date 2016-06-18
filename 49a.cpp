#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	string s;
	cin>>s;
	int i=s.length();
	i-=2;
	cout<<s[i]<<endl;
}

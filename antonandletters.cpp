#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int array[26];

int main(){
	string a;
	getline(cin,a);
	int count=0;
	int i=0;
	for(i=0;i<a.length();i+=1){
		if(a[i] == '{' or a[i] == ' ' or a[i] == ',' or a[i] == '}' )
			continue;
		if(array[a[i] - 'a'] == 0){
			count+=1;
			array[a[i] - 'a']+=1;
			}
		}
	cout<<count<<endl;
	return 0;
	}

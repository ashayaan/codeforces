#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int array1[26],array2[26];

int main(){
	string a,b;
	cin>>a>>b;
	if(a.length()!=b.length()){
		cout<<"NO"<<endl;
		return 0;
		}
	int i=0,count=0;
	for(i=0;i<a.length();i+=1){
		array1[a[i]-'a']+=1;
		array2[b[i]-'a']+=1;
		if(a[i] != b[i])
			count+=1;
		}
	bool temp=true;
	for(i=0;i<26;i+=1){
		if(array1[i] != array2[i] and (array1[i] != 0 or array2[i] != 0))
			temp=false;
		}
	if(temp and count <=2)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	}

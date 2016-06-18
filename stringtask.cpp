#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;
char vowel[12]={'a','A','e','E','i','I','o','O','u','U','y','Y'};

bool vowelPresent(char a){
	int i=0;
	for(i=0;i<12;i+=1){
		if (a == vowel[i])
			return true;
		}
	return false;
	}

int main(){
	string a;
	cin>>a;	
	string ans;
	unsigned int i=0;
	for (i=0;i<a.length();i+=1){
		if(vowelPresent(a[i]))
			continue;
		else{
			cout<<"."<<char(tolower(a[i]));
			}
		}
	cout<<endl;
	return 0;
	}

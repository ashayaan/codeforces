#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stdlib.h>


using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	int count =0;
	for(int i=0;i<n;i+=1){
		cin>>s;
		if(s[0] >= '0' and s[0] <= '9'){
			int x;
			x=(s[0] - '0')*10 + (s[1]- '0');
			if(x<18){
				count+=1;
			}
		else
			
		}
	}
	return 0;
}

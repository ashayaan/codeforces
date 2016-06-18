#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
	string s;
	cin>>s;
	int n=0,i=0,e=0,t=0;
	for(int j=0;j<s.length();j+=1){
		if(s[j] == 'n')
			n+=1;
		else if(s[j] == 'i')
			i+=1;
		else if(s[j] == 't')
			t+=1;
		else if(s[j] == 'e')
			e+=1;
	}
	//cout<<n<<i<<t<<e<<endl;
	int ans=0;
	n=(n-1)/2;
	e/=3;
	//cout<<n<<i<<t<<e<<endl;
	ans=min(n,min(e,min(i,t)));
	cout<<ans<<endl;
}

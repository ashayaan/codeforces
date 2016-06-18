#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cin>>n;
	string s;
	char ans;
	long long int mn=-2*1e9,mx=2*1e9;
	long long int x;
	int i=0;
	for(i=0;i<n;i+=1){
		cin>>s;
		cin>>x;
		cin>>ans;
		if(ans == 'N'){
			if(s == ">=")
				s="<";
			else if(s == "<=")
				s=">";
			else if(s == "<")
				s=">=";
			else if(s == ">")
				s="<=";
			}
		//cout<<s<<endl;
		if(s== ">=")
			mn=max(mn,x);
		else if (s == ">")
			mn=max(mn,x+1);
		else if(s == "<=")
			mx=min(mx,x);
		else if(s == "<")
			mx=min(mx,x-1);

		//cout<<mn<<" "<<mx<<endl;
		}
	if(mn<=mx)
		cout<<mn<<endl;
	else
		cout<<"Impossible"<<endl;
	return 0;
	}

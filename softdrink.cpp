#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int minimum(int a,int b,int c){
	return min(min(a,b),c);
	}

int main(){
	int n,k,l,c,d,p,nl,np;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	int tl;
	tl=k*l;
	int ts;
	ts=c*d;
	tl/=nl;
	p/=np;
	cout<<minimum(tl,ts,p)/n<<endl;
	return 0;
	}

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int n,m;
	cin>>n>>m;
	int a[n],b[m];
	int i=0;
	for(i=0;i<n;i+=1){
		cin>>a[i];
		}
	for(i=0;i<m;i+=1){
		cin>>b[i];
		}
	sort(a,a+n);
	sort(b,b+m);
	int c;
	c=b[0];
	int lar,smal;
	lar=a[n-1];
	smal=a[0];
	//cout<<c<<endl;
	if(max(2*smal,lar) >= c)
		cout<<"-1"<<endl;
	else
		cout<<max(lar,2* smal)<<endl;
	return 0;
	}

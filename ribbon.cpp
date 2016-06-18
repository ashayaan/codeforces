#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
	int n,m=-1e6;
	cin>>n;
	int a,b,c;
	cin>>a>>b>>c;
	int i,j,z;
	for(i=0;i*a<=n;i+=1){
		for(j=0;i*a+j*b<=n;j+=1){
			z=(n-a*i-j*b)/c;
			if(i*a+j*b+z*c == n)
				m=max(i+j+z,m);
			}
		}
	cout<<m<<endl;
	return 0;
	}

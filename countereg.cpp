#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

long long int gcd(long long int a,long long int b){
	if(b){
		return gcd(b,a%b);
		}
	else
		return a;
	}

int main(){
	long long int l,r;
	cin>>l>>r;
	if(abs(l-r) < 2){
		cout<<"-1"<<endl;
		return 0;
		}
	long long int i=0,j=0,k=0;
	long long int ans1=0,ans2=0,ans3=0;
	bool a=false;
	for(i=l;i<=r;i+=1){
		//cout<<i<<endl;
		for(j=i+1;j<=r;j+=1){
			if(gcd(i,j) == 1){
				for(k=j+1;j<r;j+=1){
					if(gcd(j,k) == 1 and gcd(i,k)!=1){
						//cout<<i<<j<<k<<endl;
						a=true;
						break;
						}
					}
				}
			if(a==true)
				break;
			}
		if(a==true)
			break;
		}
	if(a ==true)
		cout<<i<<" "<<j<<" "<<k<<endl;
	else
		cout<<"-1"<<endl;
	return 0;
	}

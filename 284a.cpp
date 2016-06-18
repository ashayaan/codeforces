#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;


int gcd(int a,int b){
	if(a == 0)
		return b;
	else 
		return gcd(b%a,a);
}

int compute(int p){
	int count=0;
	//int number=p-1;
	for(int i=0;i<p;i+=1){
		if(gcd(i,p) == 1){
			count+=1;
		}
	}
	return count;
}


int main(){
	int p;
	cin>>p;
	int ans = compute(p-1);
	cout<<ans<<endl;
	//cout<<gcd(49,7)<<endl;
}


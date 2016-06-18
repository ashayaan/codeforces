//code for 192 a
//stopped at test case 19n
//written by ahmad shayaan
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
	long long int n;
	cin>>n;	
	long long int upper=sqrt(2*n);
	long long int array[upper+1];
	int i;
	for(i=0;i<=upper;i+=1){
		array[i]=(i*(i+1))/2;
	}
	int j=upper;
	bool ans=0;
	i=1;
	while(i <= j){
		if(array[i]+array[j] == n){
			ans=1;
			break;
		}
		else if(array[i]+array[j] > n)
			j-=1;
		else if(array[i]+array[j] < n)
			i+=1;
	}
	if (ans)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}

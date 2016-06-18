#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	long long int k,d;
	cin>>k>>d;
	int i=0;
	if(k>1 and d == 0)
		cout<<"No solution"<<endl;
	else{
		int array[k];
		for(i=0;i<k;i+=1)
			array[i]=0;
		array[0]=d;
		for(i=0;i<k;i+=1)
			cout<<array[i];
		cout<<endl;
		}
	return 0;
	}

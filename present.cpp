#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	int n;
	cin>>n;
	int i,array[n+1];
	int read;
	for(i=1;i<=n;i+=1){
		cin>>read;
		array[read]=i;
		}
	for(i=1;i<=n;i+=1)
		cout<<array[i]<<" ";
	cout<<endl;
	return 0;
	}

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n,m;
	cin>>m>>n;
	int array[n];
	int i=0;
	for(i=0;i<n;i+=1)
		cin>>array[i];
	sort(array,array+n);
	i=0;
	int diff=0,min=1e6;
	while(i<n-m+1){
		//cout<<array[i+m-1]<<" "<<array[i]<<endl;
		diff=array[i+m-1]-array[i];
		if(diff <= min)
			min=diff;
		i+=1;
		}
	cout<<min<<endl;
	return 0;
	}

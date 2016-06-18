#include<iostream>
#include<string>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
	int n;
	cin>>n;
	int array[n];
	for (int i = 0; i < n ; i++){
		cin>>array[i];
		}
	sort(array,array+n);
	int i;
	int output=1;
	for(i=0;i<n;i+=1){
		if(output < array[i]){
			cout<<output<<endl;
			return 0;
			}
		output+=1;
		}
	cout<<output<<endl;
	return 0;	
	}

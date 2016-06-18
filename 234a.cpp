#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
	int n;
	cin>>n;
	char array[n+1];
	for(int i=1;i<=n;i+=1)
		cin>>array[i];
	for(int k=1;k<n/2-1;k+=1){
		if(array[k] == 'R' and array[n-k+1] == 'L')
			cout<<n-k+1<< " " <<k <<endl;
		else
			cout<<k<<" "<<n-k+1<<endl;
	}
	
	 if(array[n/2 - 1] == 'R' && array[n/2 + 1] == 'L')
	 	cout<<n/2+1<<" "<<n/2-1<<endl;
	 else
	 	cout<<n/2-1<<" "<<n/2+1<<endl;

	if(array[n/2] == 'R' && array[n/2 + 2] == 'L')
		cout<<n/2 + 2<<" "<<n/2<<endl;
    else
    	cout<<n/2<<" "<<n/2 + 2<<endl;
    return 0;

}

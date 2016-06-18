#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
	int n;
	cin>>n;
	char array[n][n];
	int i=0,j=0;
	for(i=0;i<n;i+=1){
		for(j=0;j<n;j+=1){
			cin>>array[i][j];
			}
		}
	int c=0;
	bool ans=true;
	for(i=0;i<n;i+=1){
		c=0;
		for(j=0;j<n;j+=1){
				if( i-1 >= 0 and array[i-1][j] == 'o')
					c+=1;
				if( i+1<n and array[i+1][j] == 'o')
					c+=1;
				if(j-1 >= 0 and array[i][j-1] == 'o')
					c+=1;
				if(j+1 <n and array[i][j+1] == 'o')	
					c+=1;
				/*if(i-1 >=0 and j-1 >=0 and array[i-1][j-1]== 'o')
					c+=1;
				if(i+1 <n and j-1 >=0 and array[i+1][j-1]== 'o')
					c+=1;
				if(i-1 >=0 and j+1 <n and array[i-1][j+1]== 'o')
					c+=1;
				if(i+1 <n and j+1 <n and array[i+1][j+1]== 'o')
					c+=1;
				*/		
			//cout<<c<<endl;
			if( c%2 != 0){
				ans=false;
				}
			if(ans == false)
				break;
			}
		}
	if(ans == true)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
	}

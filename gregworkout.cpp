#include<iostream>
#include<algorithm>
#include<string>
#include<vector>

using namespace std;

int maximum(int a,int b,int c){
	return max(max(a,b),c);
	}

int main(){
	int n;
	cin>>n;
	int array[n];
	int i=0;
	int chest=0,biceps=0,back=0;
	for(i=0;i<n;i+=1){
		cin>>array[i];
		}
	i=0;
	int max=-1e8,index=0;
	while(i<n){
		chest+=array[i];
		if(i+1 < n)
			biceps+=array[i+1];
		if(i+2 < n)
			back+=array[i+2];
		i+=3;
		}
	int ans;
	//cout<<chest<<biceps<<back<<endl;
	ans=maximum(chest,biceps,back);
	if(ans == chest)
		cout<<"chest"<<endl;
	else if(ans == biceps)
		cout<<"biceps"<<endl;
	else if(ans == back)
		cout<<"back"<<endl;	
	return 0;
	}

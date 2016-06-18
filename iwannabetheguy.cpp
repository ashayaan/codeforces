#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main(){
	int n;
	cin>>n;
	//cout<<n<<endl;
	int array[n+1];
	int i=0;
	for(i=0;i<n+1;i+=1)
		array[i]=0;
	int p;
	cin>>p;
	//cout<<p;
	int read;
	for(i=0;i<p;i+=1){
		cin>>read;
		array[read]+=1;
		}
	int q;
	cin>>q;
	for(i=0;i<q;i+=1){
		cin>>read;
		array[read]+=1;
		}
	for(i=1;i<=n;i+=1){
		if(array[i] == 0){
			cout<<"Oh, my keyboard!"<<endl;
			return 0;
			}
		}
	cout<<"I become the guy."<<endl;
	return 0;
	}

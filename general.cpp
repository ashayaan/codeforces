#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int n;
	cin>>n;
	int i=0;
	int max=0,min=1000,maxi=0,mini=0;
	int read;
	for(i=0;i<n;i+=1){
		cin>>read;
		if(read > max){
			max=read;
			maxi=i;
			}
		if(read <= min){
			min=read;
			mini=i;
			}
		}
	//cout<<max<<" "<<maxi<<" "<<min<<" "<<mini<<endl;
	int swaps=0;
	swaps=maxi + (n-mini-1);
	if(maxi > mini)
		swaps-=1;
	cout<<swaps<<endl;
	return 0;
	}

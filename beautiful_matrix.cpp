#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	int i=0;
	int j=0;
	int index1,index2;
	int read;
	for(i=0;i<5;i+=1){
		for(j=0;j<5;j+=1){
			cin>>read;
			if(read==1){
				index1=i+1;
				index2=j+1;
				break;
				}
			}
		}
	i=index1;
	j=index2;
	int count=0;
	if(i==3 and j==3)
		cout<<count<<endl;
	else{
		count=abs(3-i) +abs(3-j);
		cout<<count<<endl;
		}
	return 0;
	}

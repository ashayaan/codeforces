#include <bits/stdc++.h>

using namespace std;

int findMin(int a,int b,int c){
	return min(min(a,b),c);
	}

int main(){
	int n;
	cin>>n;
	int count1=0,count2=0,count3=0;
	int read,array[n];
	int index1[n],index2[n],index3[n];
	int i1=0,i2=0,i3=0;
	int i=0;
	for(i=0;i<n;i+=1){
		cin>>read;
		if( read == 1){
			index1[i1++]=i+1;
			count1+=1;
			}
		else if(read == 2){
			index2[i2++]=i+1;
			count2+=1;
			}
		else if(read == 3){
			index3[i3++]=i+1;
			count3+=1;
			}
		array[i]=read;
		}
	if(count1 == 0 or count2 == 0 or count3 == 0){
		cout<<"0"<<endl;
		return 0;
		}
	else{
		int m;
		m=findMin(count1,count2,count3);
		cout<<m<<endl;
		for(i=0;i<m;i+=1){
			cout<<index1[i]<<" "<<index2[i]<<" "<<index3[i]<<endl;
			}
		}
	}

#include<iostream>
#include<algorithm>

using namespace std;

int main(){
	int array[3];
	int i=0;
	for(i=0;i<3;i+=1)
		cin>>array[i];
	int cal,max=-1e6;
	cal=array[0]+array[1]*array[2];
	if(cal>max)
		max=cal;
	cal=array[0]+(array[1]+array[2]);
	if(cal>max)
		max=cal;
	cal=array[0]*array[1]*array[2];
	if(cal>max)
		max=cal;
	cal=(array[0]+array[1])*array[2];
	if(cal>max)
		max=cal;
	cal=array[0]*(array[1]+array[2]);
	if(cal>max)
		max=cal;
	cal=array[0]*array[1]+array[2];
	if(cal>max)
		max=cal;
	cout<<max<<endl;
	return 0;
	}

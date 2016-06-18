#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(){
	int n;
	cin>>n;
	int i=0;
	int array[n][2];
	for(i=0;i<n;i+=1){
		cin>>array[i][0]>>array[i][1];
		}
	int j=0;
	int sum=0;
	int count1=0,count2=0,count3=0,count4=0;
	for(i=0;i<n;i+=1){
		count1=0;
		count2=0;
		count3=0;
		count4=0;
		for(j=0;j<n;j+=1){
			if(array[i][0] == array[j][0] and array[i][1] == array[j][1])
				continue;
			else if(array[i][0] > array[j][0] and array[i][1] == array[j][1]){
				count1+=1;
				}
			else if(array[i][0] < array[j][0] and array[i][1] == array[j][1]){
				count2+=1;
				}
			else if(array[i][0] == array[j][0] and array[i][1] < array[j][1]){
				count3+=1;
				}
			else if(array[i][0] == array[j][0] and array[i][1] > array[j][1]){
				count4+=1;
				}
			}
		if(count1 > 0 and count2 > 0 and count3 > 0 and count4 > 0)
			sum+=1;
		}
	cout<<sum<<endl;
	return 0;
	}

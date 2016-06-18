#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<stdio.h>
#include<cmath>

using namespace std;

void swap(int *a, int *b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	}


int main(){
	int n;
	scanf("%d",&n);
	int i=0;
	int array[n];
	for(i=0;i<n;i+=1){
		scanf("%d",&array[i]);
		}
	int min=1e6;
	int in1,in2;
	int j=0;
	int diff=0;
	for(i=0;i<n;i+=1){
		if(i==n-1){
			diff=abs(array[0]-array[i]);
			if(diff < min){
				min=diff;
				in1=i;
				in2=0;
				}
			}
			else{
				diff=abs(array[i]-array[i+1]);
				if(diff < min){
					//cout<<diff<<endl;
					min=diff;
					in1=i;
					in2=i+1;
					}
				
				}
			}
	cout<<in1+1<<" "<<in2+1<<endl;
	return 0;
	}

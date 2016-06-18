//C, C#, D, D#, E, F, F#, G, G#, A, B, H.

#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>
#include<stdio.h>
#include<stdlib.h>

using namespace std;

bool checkMajor(vector<int> index){
	unsigned int i=0,j=0,k=0;
	int d1,d2;
	for(i=0;i<3;i+=1){
		for(j=0;j<3;j+=1){
			if(i == j)
				continue;
			for(k=0;k<3;k+=1){
				if(k == j or k == i)
					continue;
				d1=index[j]-index[i];
				d2=index[k]-index[j];
				if(d1 < 0)
					d1+=12;
				if(d2 < 0)
					d2+=12;
				if(d1 == 4 and d2 == 3){
					return 1;
					}
			}
		}
	}
	return 0;
}

bool checkMinor(vector<int> index){
	unsigned int i=0,j=0,k=0;
	int d1,d2;
	for(i=0;i<3;i+=1){
		for(j=0;j<3;j+=1){
			if(i == j)
				continue;
			for(k=0;k<3;k+=1){
				if(k == j or k == i)
					continue;
				d1=index[j]-index[i];
				d2=index[k]-index[j];
				if(d1 < 0)
					d1+=12;
				if(d2 < 0)
					d2+=12;
				if(d1 == 3 and d2 == 4)
					return 1;
			}
		}
	}
	return 0;
}


int main(){
	string a,b,c;
	cin>>a>>b>>c;
	vector<string> data;
	data.push_back("C");
	data.push_back("C#");
	data.push_back("D");
	data.push_back("D#");
	data.push_back("E");
	data.push_back("F");
	data.push_back("F#");
	data.push_back("G");
	data.push_back("G#");
	data.push_back("A");
	data.push_back("B");
	data.push_back("H");
	
	vector<int> index;
	
	for(unsigned int i=0;i<data.size();i+=1){
		if(data[i] == a or data[i] == b or data[i] == c){
			index.push_back(i);
			//cout<<i<<endl;
			}
	}
	
	if (checkMajor(index)){
		cout<<"major"<<endl;
	}
	else if(checkMinor(index)){
		cout<<"minor"<<endl;
	}
	else
		cout<<"strange"<<endl;
	return 0;
}

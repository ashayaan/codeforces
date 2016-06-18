#include<iostream>
#include<string>
#include<vector>
#include<set>

using namespace std;

int main(){
	int n;
	cin>>n;
	set<int> x,y;
	for(int i=0;i<n;i+=1){
		int tx,ty;
		cin>>tx>>ty;
		x.insert(tx);
		y.insert(ty);
	}
	if(x.size() > y.size())
		cout<<y.size()<<endl;
	else
		cout<<x.size()<<endl;
		
	return 0;
}

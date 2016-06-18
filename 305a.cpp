#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int ans[5];

int main(){
	int n;
	cin>>n;
	int read;
	for(int i=0;i<n;i+=1){
		cin>>read;
		if(read == 0)
			ans[0] = 1;
		else if(read == 100)
			ans[1] = 1;
		else if(read %10 == 0)
			ans[2] = read;
		else if (read < 10)
			ans[3] = read;
		else
			ans[4]=read;
	}
	vector<int> result;
	if(ans[0])
		result.push_back(0);
	if(ans[1])
		result.push_back(100);
	if(ans[2])
		result.push_back(ans[2]);
	if(ans[3])
		result.push_back(ans[3]);
	if(!ans[2] and !ans[3] and ans[4])
		result.push_back(ans[4]);
	sort(result.begin(),result.end());
	cout<<result.size()<<endl;
	for(unsigned int i=0;i<result.size();i+=1)
		cout<<result[i]<<" ";
	cout<<endl;
	return 0;
}

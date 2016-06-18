#include <iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,m,k;
    cin>>n>>m>>k;
    int array[n];
    int i=0;
    for(i=0;i<n;i+=1)
        cin>>array[i];
    sort(array,array+n);
    int count=0;
    if(m<=k){
        std::cout << "0" << std::endl;
        return 0;
    }
    int s=k;
    i=n-1;
    //cout<<array[n-1]<<endl;
    while(i>=0){
        //std::cout << array[i] << std::endl;
        s+=array[i]-1;
        count+=1;
        //cout<<s<<endl;
        if(s>=m){
            break;
        }
        i-=1;
    }
    //cout<<s<<endl;
    if (s >= m) {
        std::cout << count << std::endl;
    }
    else
        std::cout << "-1" << std::endl;
    return 0;
}

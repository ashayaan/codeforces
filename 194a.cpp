#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    if (k < 3*n) {
        std::cout << 3*n -k << std::endl;
    }
    else {
        std::cout << "0" << std::endl;
    }
    return 0;
}

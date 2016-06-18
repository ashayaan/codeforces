#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <vector>

using namespace std;

char array[9] ={'6', '7', '8', '9', 'T', 'J', 'Q', 'K', 'A'};

int getIndex(char a){
    int i=0;
    for(i=0;i<9;i+=1){
        if(a == array[i]){
            break;
        }
    }
    return i;
}

int main(){
    char trump;
    std::cin >> trump;
    string a,b;
    cin>>a>>b;
    if(a[1] == trump and b[1] != trump){
        std::cout << "YES" << std::endl;
        return 0;
    }
    if(a[1] != b[1]){
        std::cout << "NO" << std::endl;
        return 0;
    }
    int index1,index2;
    index1=getIndex(a[0]);
    index2=getIndex(b[0]);
    //std::cout << index1 << index2 << std::endl;
    if (index1 > index2) {
        std::cout << "YES" << std::endl;
        /* code */
    }
    else
        std::cout << "NO" << std::endl;
    return 0;
}

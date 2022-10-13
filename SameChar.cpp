#include<bits/stdc++.h>
using namespace std;

bool SameChar(string str){
    return (str.find_first_not_of(str[0]) == string::npos);
}

int main(){
    string str = "aaa";
    if(SameChar(str)){
        cout<<"this is the string containing the same character"<<endl;
    }
    else{
        cout<<"not having the same character"<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int isString(string str){
    int l = str.length();
    for(int i = 0;i<l;i++){
        if(isdigit(str[i]) == false){
            return false;
        }
    }
    return true;
}

int main(){
    string str = "1243";
    if(isString(str)){
        cout<<"this is a string"<<endl;
    }
    else{
        cout<<"this is an integer"<<endl;
    }
    return 0;
}
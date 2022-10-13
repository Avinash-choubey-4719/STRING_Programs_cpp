#include<bits/stdc++.h>
using namespace std;

void isDuckNumber(string str){
    int i = 0;
    int n = str.length();
    while(i < n && str[i] == '0'){
        i++;
    }

    while(i < n){
        if(str[i] == '0'){
            cout<<"this number is a duck number"<<endl;
            return;
        }
        i++;
    }
    cout<<"this number is not a duck number"<<endl;
    return;
}

int main(){
    string str = "1024";
    isDuckNumber(str);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool check(string str){
    int mul = 0;
    int result = 0;
    for(int i = 0;i<str.length();i++){
        int integer = str[i] - '0';

        result = result + pow(2, i)*integer;
    }

    int rem = result % 10;
    if(rem == 5 || rem == 0){
        return true;
    }
    return false;
}

int main(){
    string str = "100";
    cout<<check(str)<<endl;
    return 0;
}
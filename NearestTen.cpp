#include<bits/stdc++.h>
using namespace std;

string converString(string str){
    int l = str.length();
    if(str[l - 1] == '0'){
        return str;
    }

    if(str[l - 1] == '1' || str[l - 1] == '2' || str[l - 1] == '3' || str[l - 1] == '4' || str[l - 1] == '5'){
        str[l - 1] = '0';
        return str;
    }
    str[l - 1] = '0';
    for(int i = l - 2;i>=0;i--){
        if(str[i] == '9'){
            str[i] = '0';
        }
        else{
            int n = str[i] - '0' + 1;
            str[i] = (char)(48 + n);
            break;
        }
    }
    if(str[0] == '0'){
        str = '1' + str;
    }
    return str;
}

int main(){
    string str = "1234567890123456789";
    string result = converString(str);
    cout<<result<<endl;
    return 0;
}
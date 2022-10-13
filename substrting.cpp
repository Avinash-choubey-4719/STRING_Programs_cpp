#include<bits/stdc++.h>
using namespace std;

vector<string> allSubstring(string str){
    int l =  str.length();

    vector<string>result;

    for(int i = 0;i<l;i++){
        char temp[l - i + 1];
        int index = 0;

        for(int j = i;j<l;j++){
            temp[index] = str[j];
            index++;
            temp[index] = '\0';
            result.push_back(temp);
        }
    }

    return result;
}

int main(){
    string str = "abcd";
    vector<string>substring = allSubstring(str);

    for(int i = 0;i<substring.size();i++){
        cout<<substring[i]<<endl;
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

bool checkSubsequence(string str, string part){
    int i = 0;
    int j = 0;

    while(j < str.length()){
        if(part[i] == str[j]){
            i++;
        }
        j++;
    }

    return (i == (part.length()));
}

int main(){
    string str = "geeksforgeeks";
    string part = "eeorgsd";
    cout<<checkSubsequence(str, part)<<endl;
    return 0;
}
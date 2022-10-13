#include<bits/stdc++.h>
using namespace std;

vector<string>result;

void listOfSubstring(string input, string output){
    if(input.empty()){
        result.push_back(output);
        return;
    }

    listOfSubstring(input.substr(1), output + input[0]);
    listOfSubstring(input.substr(1), output);
}

int main(){
    listOfSubstring("abcd", "");
    for(auto i : result){
        cout<<i<<endl;
    }
    return 0;
}
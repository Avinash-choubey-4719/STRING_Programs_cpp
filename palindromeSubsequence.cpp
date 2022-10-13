#include<bits/stdc++.h>
using namespace std;

vector<string>all_subsequence;

void listOfSubsequence(string input, string output){
    if(input.empty()){
        all_subsequence.push_back(output);
        return;
    }

    listOfSubsequence(input.substr(1), output + input[0]);
    listOfSubsequence(input.substr(1), output);
}

bool isPalin(string str){
    int i = 0;
    int j = str.length() - 1;
    while(i < j){
        if(str[i] != str[j]){
            return 0;
        }
    }
    return 1;
}

bool checkAtleastPalin(){
    for(int i = 0;i<all_subsequence.size();i++){
        if(!isPalin(all_subsequence[i])){
            return true;
        }
    }
    return false;
}

int main(){
    string str = "geeksforgeeks";
    listOfSubsequence(str, "");
    if(checkAtleastPalin()){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

vector<string>all_subsquences;

int count(){

    int c = 0;

    sort(all_subsquences.begin(), all_subsquences.end());

    for(int i = 1;i<all_subsquences.size();i++){
        if(all_subsquences[i] == all_subsquences[i - 1]){
            c++;
        }
    }
    return c;
}


void listOfSubsequences(string input, string output){
    if(input.empty()){
        all_subsquences.push_back(output);
        return;
    }

    listOfSubsequences(input.substr(1), output + input[0]);
    listOfSubsequences(input.substr(1), output);
}

int main(){
    string str = "geeksforgeeks";
    listOfSubsequences(str, "");
    cout<<all_subsquences.size()<<endl;
    int value = pow(2, str.length());
    cout<<value<<endl;
    int c = count();
    cout<<c<<endl;
    return 0;
}
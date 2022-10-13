#include<bits/stdc++.h>
using namespace std;

vector<string> listOfWords(string str){
    istringstream ss(str);

    vector<string>result;
    string word = "";

    while(ss >> word){
        result.push_back(word);
    }

    return  result;
}

int main(){
    string str = "this is my string";
    vector<string>result = listOfWords(str);

    for(auto i : result){
        cout<<i<<endl;
    }

    return 0;
}
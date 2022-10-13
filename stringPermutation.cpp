#include<bits/stdc++.h>
using namespace std;

vector<string> allPermutation(string str){
    sort(str.begin(), str.end());
    vector<string>result;

    do{
        result.push_back(str);
    }while(next_permutation(str.begin(), str.end()));

    return result;
}

int main(){
    string str = "abc";

    vector<string>result = allPermutation(str);

    for(auto i : result){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}
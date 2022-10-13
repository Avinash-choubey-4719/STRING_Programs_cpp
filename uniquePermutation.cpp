#include<bits/stdc++.h>
using namespace std;

set<string> unique(string str){
    set<string> my_set;

    sort(str.begin(), str.end());

    do{
        my_set.insert(str);
    }while(next_permutation(str.begin(), str.end()));

    return my_set;
}

int main(){
    string str = "aab";
    set<string>result = unique(str);
    cout<<result.size();
    return 0;
}
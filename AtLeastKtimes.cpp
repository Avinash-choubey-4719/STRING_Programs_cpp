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

bool hasAtLeastK(string str, int k){
    int hash[26] = {0};

    for(int i = 0;i<str.length();i++){
        hash[str[i] - 'a']++;
    }

    for(int i = 0;i<26;i++){
        if(hash[i] < k && hash[i] != 0){
            return false;
        }
    }
    return true;
}

int countKTimes(int k){

    int count = 0;
    string result = "";

    for(int i = 0;i<all_subsequence.size();i++){
        if(hasAtLeastK(all_subsequence[i], k)){
            count++;

            if(all_subsequence[i].length() > result.length()){
                result = all_subsequence[i];
            }
        }
    }
    cout<<result<<endl;
    return count;
}

int main(){
    string str = "geeksforgeeks";
    int k = 2;

    listOfSubsequence(str, "");
    int count = countKTimes(k);

    cout<<count<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

void minSum(vector<string>s1, vector<string>s2){
    unordered_map<string, int>m1;

    for(int i = 0;i<s1.size();i++){
        m1[s1[i]] = i;
    }

    int min = INT_MAX;
    vector<string>result;

    for(int i = 0;i<s2.size();i++){
        if(m1.count(s2[i]) != 0){
            int sum = i + m1[s2[i]];

            if(sum < min){
                min = sum;
                result.clear();
                result.push_back(s2[i]);
            }

            else if(sum == min){
                result.push_back(s2[i]);
            }
        }
    }

    for(int i = 0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return;
}

int main(){
    vector<string>s1;
    vector<string>s2;

    s1.push_back("geeksforgeeks");
    s1.push_back("leetcode");
    s1.push_back("hackerrank");
    s1.push_back("codechef");

    s2.push_back("leetcode");
    s2.push_back("geeksforgeeks");
    s2.push_back("hackerrank");
    s2.push_back("hackerearth");

    minSum(s1, s2);

    return 0;
}
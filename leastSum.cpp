#include<bits/stdc++.h>
using namespace std;

vector<string> leastSum(vector<string>l1, vector<string>l2){
    map<string, int>my_map;

    for(int i = 0;i<l1.size();i++){
        my_map[l1[i]] = i;
    }

    int sum = INT_MAX;
    vector<string>result;

    for(int i = 0;i<l2.size();i++){
        if(my_map[l2[i]]){
            int temp_sum = i + my_map[l2[i]];
            if(temp_sum < sum){
                sum = temp_sum;
                result.clear();
                result.push_back(l2[i]);
            }

            else if(temp_sum == sum){
                result.push_back(l2[i]);
            }
        }
    }

    return result;
}

int main(){
   vector<string>l1 = {"geeksforgeeks", "hackerrank", "codechef", "leetcode", "codeforces"};
   vector<string>l2 = {"hackerearth", "w3schools", "geeksforgeeks", "leetcode"};

   vector<string>result = leastSum(l1, l2);

   for(auto i : result){
    cout<<i<<" ";
   }

   return 0;
}
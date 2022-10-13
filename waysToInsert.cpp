#include<bits/stdc++.h>
using namespace std;

vector<string> substrings(string str){
    vector<string>result;

    for(int i = 0;i<str.length();i++){
        char temp[str.length() - i + 1];
        int index = 0;

        for(int j = i;j<str.length();j++){
            temp[index] = str[j];
            index++;
            temp[index] = '\0';
            result.push_back(temp);
        }
        
    }
    return result;
}

int numberOfWays(vector<string>v1, vector<string>v2){

    int count = 0;
    int least_length = INT_MAX;

    for(int i = 0;i<v2.size();i++){
        for(int j = 0;j<v1.size();j++){
            string temp = v2[i].substr(0, v2[i].length() - 1);
            if(temp == v1[j]){
                if(temp.length() < least_length){
                    least_length = temp.length();
                    count = 0;
                }

                else if(temp.length() == least_length){
                    count++;
                }
            }
        }
    }
    return count;
}

int main(){
   string s1 = "abab";
   string s2 = "abc";

   int count = numberOfWays(substrings(s1), substrings(s2));
   cout<<count<<endl;
   return 0;
}
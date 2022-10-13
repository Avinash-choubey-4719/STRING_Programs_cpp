#include<bits/stdc++.h>
using namespace std;

bool checkDivisibility(string str){
    int l = str.length();
    int result = 0;

    for(int i = 0;i<l;i++){
        result += (str[i] - '0');
    }

    if(result % 3 == 0){
        return true;
    }
    return false;
}

bool checkDivisibilityBy2(string str){
    int l = str.length();

    int last_digit = str[l - 1] - '0';

    if(last_digit % 2 == 0){
        return true;
    }
    return false;
}

bool checkSubstrings(string str){
    if(checkDivisibility(str) && checkDivisibilityBy2(str)){
        return true;
    }
    return false;
}

vector<string> findSubstrings(string str){
    vector<string>result;

    int l = str.length();

    for(int i = 0;i<l;i++){
        char temp[l - i + 1];
        int index = 0;
        for(int j = i;j<l;i++){
            temp[index] = str[i];
            index++;
            temp[index] = '\0';
            result.push_back(temp);
        }
    }

    return result;
}

int countSubstring(vector<string>substrings){
    int count = 0;
    for(auto str : substrings){
        if(checkSubstrings(str)){
            cout<<str<<endl;
            count++;
        }
    }
    return count;
}

int main(){
    string str = "333";
    bool result = checkDivisibility(str);
    cout<<result<<endl;
    return 0;
}
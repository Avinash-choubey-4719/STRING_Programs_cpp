#include<bits/stdc++.h>
using namespace std;

string longNumberSum(string s1, string s2){
    int l1 = s1.length();
    int l2 = s2.length();

    if(l1 < l2){
        swap(s1, s2);
    }

    l1 = s1.length();
    l2 = s2.length();

    int carry = 0;
    string result = "";

    for(int i = l2 - 1;i >= 0;i --){
        int sum = (s1[i] - '0') + (s2[i] - '0') + carry;
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    for(int i = l1 - l2 - 1;i>=0;i--){
        int sum = s1[i] - '0' + carry;
        result.push_back(sum % 10 + '0');
        carry = sum / 10;
    }

    if(carry){
        result.push_back(carry + '0');
    }

    reverse(result.begin(), result.end());

    return result;

}

int main(){
    string s1 = "123";
    string s2 = "123";

    string result = longNumberSum(s1, s2);
    cout<<result;
    return 0;
}
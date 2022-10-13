#include<bits/stdc++.h>
using namespace std;

string multiply(string s1, string s2){
    int n = s1.size();
    int m = s2.size();
    vector<int>result(n + m, 0);

    for(int i = n - 1;i>=0;i--){
        for(int j = m - 1;j>=0;j--){
            result[i + j + 1] += (s1[i] - '0') * (s2[j] - '0');
        }
    }

    for(int i = result.size() - 1;i>0;i--){
        if(result[i] >= 10){
            result[i - 1] = result[i - 1] + result[i] / 10;
            result[i] = result[i] % 10;
        }
    }

    int i = 0;
    while(i < result.size() && result[i] == 0){
        i++;
    }

    string temp = "";
    while(i < result.size()){
        temp.push_back(result[i] + '0');
        i++;
    }

    return temp;
}

int checkPower(string s1, string s2){
    if(s1 > s2){
        checkPower(s2, s1);
    }

    string temp = s1;

    while(s1 < s2){
        s1 = multiply(s1, temp);
    }

    return s1 == s2;
}

int main(){
    string s1 = "12";
    string s2 = "144";

    cout<<checkPower(s1, s2);

    return 0;
}
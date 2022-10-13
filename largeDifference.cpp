#include<bits/stdc++.h>
using namespace std;

string findDifference(string s1, string s2){
    string result = "";
    int mul_factor = 0;

    int i = 0;
    for(i = s2.length() - 1;i>=0;i--){
        int first = s1[i] - '0';
        int second = s2[i] - '0';

        if(first < second){
            first += 10;

            s1[i - 1] = (int(s1[i - 1]) - 1) + '0';
        }

        result.push_back((first - second) + '0');
    }

    i = s1.length() - s2.length() - 1;

    while(i >= 0){
        if(s1[i] != '0')
        result.push_back(s1[i]);
        i--;
    }

    reverse(result.begin(), result.end());

    return result;
}

int main(){
   string s1 = "123";
   string s2 = "120";

   cout<<findDifference(s1, s2)<<endl;
   return 0;
}
#include<bits/stdc++.h>
using namespace std;

char extraChar(string s1, string s2){
    string small;
    string large;
    if(s1.length() > s2.length()){
        small = s2;
        large = s1;
    }
    else{
        small = s1;
        large = s2;
    }

    int smallTotal = 0;
    int largeTotal = 0;
    int i = 0;

    for(i = 0;i<small.length();i++){
        smallTotal += small[i];
        largeTotal += large[i];
    }

    largeTotal += large[i];

    int charnumber = largeTotal - smallTotal;
    return (char)charnumber;
}

int main(){
    string s1 = "abc";
    string s2 = "abcd";
    char ch = extraChar(s1, s2);
    cout<<ch<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int zeroXOR(string str){
    int l = str.length();
    int ones = 0;
    int zeros = 0;

    for(int i = 0;i<l;i++){
        if(str[i] == '1'){
            ones++;
        }
        else{
            zeros++;
        }
    }

    if(ones % 2){
        return ones;
    }
    return zeros;
}

int main(){
    string str = "11001100";

    int ans = zeroXOR(str);
    cout<<ans<<endl;

    return 0;
}
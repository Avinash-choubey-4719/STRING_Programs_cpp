#include<bits/stdc++.h>
using namespace std;

int remainder(string str){
    int series[] = {1, 3, 2, -1, -3, -2};

    int l = str.length();
    int result = 0;
    int index = 0;

    for(int i = l - 1;i>=0;i--){
        result = result + (str[i] - '0')*series[index];

        index = (index + 1) % 6;

        result = result % 7;
    }

    if(result < 0){
        return result % 7;
    }

    return result;
}

int main(){
    string num = "48";
    int result = remainder(num);

    cout<<result<<endl;
    return 0;
}
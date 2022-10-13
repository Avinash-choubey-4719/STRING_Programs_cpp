#include<bits/stdc++.h>
using namespace std;

string divide(string num, int divisor){
    int index = 0;
    string result = "";

    int temp = num[index] - '0';

    while(temp < divisor){
        temp = temp * 10 + (num[++index] - '0');
    }

    while(index < num.length()){
        result += (temp / divisor) + '0';

        temp = temp % divisor;

        temp = temp * 10 + num[++index] - '0';
    }

    return result;
}

int main(){
    string num = "124";
    int divisor = 2;

    string result = divide(num, divisor);

    cout<<result<<endl;
    return 0;
}
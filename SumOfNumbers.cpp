#include<bits/stdc++.h>
using namespace std;

int findSum(string str){
    int n = str.length();
    string temp = "";
    int sum = 0;

    for(int i = 0;i<n;i++){
        if(isdigit(str[i])){
            temp.push_back(str[i]);
         }
        else{
            sum += atoi(temp.c_str());
            temp = "";
        }
    }
    sum = sum + atoi(temp.c_str());
    return sum;
}

int main(){
    string str = "12abc12";
    int sum = findSum(str);
    cout<<sum<<endl;
    return 0;
}
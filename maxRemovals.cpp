#include<bits/stdc++.h>
using namespace std;

int maxRemoval(string str){
    int g = 0;
    int gk = 0;
    int gks = 0;

    for(int i = 0;i<str.length();i++){
        if(str[i] == 'g'){
            g++;
        }

        else if(str[i] == 'k' && g > 0){
            g--;
            gk++;
        }

        else if(str[i] == 's' && gk > 0){
            gk--;
            gks++;
        }
    }

    return gks;
}

int main(){
    string str = "ggkssk";
    int result = maxRemoval(str);
    cout<<result<<endl;
    return 0;
}
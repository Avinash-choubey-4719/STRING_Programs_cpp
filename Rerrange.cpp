#include<bits/stdc++.h>
using namespace std;

struct key{
    int count;
    char ch;

    bool operator<(const key& k) const{
        return count < k.count;
    }
};

void rearrrange(string str){
    int l = str.length();
    int count[26] = {0};

    for(int i = 0;i<l;i++){
        int index  = str[i] - 'a';
        count[index]++;
    }

    priority_queue<key>pq;
    for(char c = 'a' ; c <='z';c++){
        int index = c - 'a';
        if(count[index]){
            pq.push(key{count[index], c});
        }
    }

    string result = "";
    key prev = {-1, '#'};
    while(!pq.empty()){
        key current = pq.top();
        pq.pop();
        result = result + current.ch;
        if(prev.count > 0){
            pq.push(prev);
        }

        (current.count)--;
        prev = current;

    }

    if(l != result.length()){
        cout<<"not possible"<<endl;
    }
    else{
        cout<<result<<endl;
    }
}

int main(){
    string str = "bbbaa";
    rearrrange(str);
    return 0;
}
#include<iostream>
#include<string>
using namespace std;

void subset(string ip, string op){
    if(ip.size() == 0){
        cout<<op;
        return ;
    }

    string op1 = op;
    string op2 = op;

    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);

    subset(ip, op1);
    subset(ip, op2);
    
}

int main(){
    string s = "ab";
    string op = " ";

    subset(s, op);

    return 0;
}
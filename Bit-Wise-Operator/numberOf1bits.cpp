#include<iostream>
using namespace std;

int numberOf1(uint32_t n){
    int cnt=0;
    while(n>0){
        if(n&1) cnt++;   //n&1 tells that particular bit is set(1) bit or not
        n>>=1;           // right shifting
    }

    return cnt;
}

int main(){
    uint32_t n = 00000000000000000000000000001011;

    cout<< numberOf1(n);

    return 0;
}

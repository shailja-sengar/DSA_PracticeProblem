#include<iostream>
using namespace std;

int sumOfN(int n){
    if(n == 1){
        return 1;
    }

    return n + sumOfN(n-1);
}
int main(){
    int n = 6;

    cout<<sumOfN(n);

    return 0;
}
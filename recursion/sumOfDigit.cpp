#include<iostream>
using namespace std;

int sumOfDigit(int num){
    if(num == 0){
        return 0;
    }

    return (num % 10 + sumOfDigit(num/10));
}

int main(){
    int num = 12345;

    cout<<sumOfDigit(num);

    return 0;
}
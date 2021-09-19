#include<iostream>
using namespace std;

int numberOfSteps(int num){
    if(num == 0){
            return 0 ;
        }
        
        if(num % 2 != 0){
            return 1+ numberOfSteps(num-1);
        }
        
        else{
            return 1 + numberOfSteps(num/2);
        }
        
        return 0;
}
int main(){
    int n = 14;

    cout<<numberOfSteps(n);

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

vector<int>countingBit(int n){
    vector<int> ans(n +1);
    for(int i=1; i<=n; i++){
        if(i%2){
            ans [i] = ans[i >> 1] + 1;
        }
        else{
            ans[i] = ans[i >> 1];
        }
    }

    return ans;
} 
int main(){
    int n =5 ;
    vector<int> ans;
    ans = countingBit(n);
    for(int i=0; i<ans.size()-1; i++){
        cout<< ans[i];
    }

    return 0;
}
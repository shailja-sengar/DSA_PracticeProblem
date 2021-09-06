#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool canMakeArithmeticProgression(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());

    int diff = arr[1] - arr[0];

    for(int i=2; i<n-1; i++){
        if(arr[i] + diff != arr[i+1]){
            return false;
        }
    }

    return true;
}
int main(){
    vector<int>arr = {3,5,1};
    int n = arr.size();

    cout<<canMakeArithmeticProgression(arr, n);
        

    return 0;
}
#include<iostream>
#include<vector>
using namespace std;

int minimum(vector<int>&arr, int n){
    if(n == 1){
        return arr[0] ;
    }
  
   return min(arr[n-1], minimum(arr, n-1));
    
}
int main(){
    vector<int> arr = {2,1234,4,5,1};
    int n = arr.size();

    cout<<minimum(arr, n);

    return 0;
}

#include<iostream>
#include<vector>
using namespace std;

int maximum(vector<int>&arr, int n){
    if(n == 1){
        return arr[0] ;
    }
  
   return max(arr[n-1], maximum(arr, n-1));
    
}
int main(){
    vector<int> arr = {2,1234,4,5,1};
    int n = arr.size();

    cout<<maximum(arr, n);

    return 0;
}
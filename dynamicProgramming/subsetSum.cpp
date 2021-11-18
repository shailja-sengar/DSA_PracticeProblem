#include<iostream>
#include<vector>
using namespace std;
bool t[6][31];
bool subsetSum(vector<int> &arr, int sum, int n){
    for(int i=0; i<=n; i++){
        for(int j=0; j<=sum; j++){
            if(i==0){
                t[i][j] = false; 
            }
            if(j==0){
                t[i][j] = true;
            }
        }
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=sum; j++){
            if(arr[i-1] <= j){
                t[i][j] = t[i-1][j - arr[i-1]] || t[i-1][j];
            }
            else{
                t[i][j] = t[i-1][j];
            }
        }
    }

    return t[n][sum];
}
int main(){
    vector<int> arr = {3, 34, 4, 12, 5, 2};
    int sum = 30;
    int n = arr.size();
     cout<<subsetSum(arr, sum, n);
    return 0;
}
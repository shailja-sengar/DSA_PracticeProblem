#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int maxProduct(vector<int>&nums, int n){
    sort(nums.begin(), nums.end());
    return (nums[n-1] -1) * (nums[n-2] - 1);
}
int main(){
    vector<int>nums = {1,4,3,5};
    int n = nums.size();

    cout<<"MAximum Product of two elements in array: "<<maxProduct(nums, n);

    return 0;
}

/* Another Approach
 
int maxProduct(vector<int>&nums, int n){
    int max1=INT_MIN, max2= INT_MIN;

    for(auto x : nums){
        if(x > max1){
            max2 = max1;
            max1 = x;
        }

        else if(x > max2){
            max2 = x;
        }
    }

    return (max1 - 1) * (max2 -1);
}

//Asked in : Samsung





*/
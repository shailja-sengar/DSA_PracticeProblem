#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int arrayPairSum(vector<int>&nums, int n)
{
     int ans=0, i=0;
     sort(nums.begin(), nums.end());

     while(i<n)
     {
         ans += min(nums[i], nums[i+1]);
         i = i+2;
     }

     return ans;
}

int main()
{
    vector<int>nums = {1,3,2,4};
    int n = nums.size();

    cout<<"Maximum sum among all the pairs: "<<arrayPairSum(nums, n);

    return 0;
}
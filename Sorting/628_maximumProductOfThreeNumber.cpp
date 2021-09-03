#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int maximumProduct(vector<int> &nums, int n ){
    sort(nums.begin(), nums.end());

    return max((nums[0] * nums[1] * nums[n-1]), (nums[n-1] * nums[n-2] * nums[n-3]));
}
int main()
{
    vector<int>nums = {1,2,-1,4,-2};
    int n = nums.size();

    cout<<"Maximum of product of three numbers: "<<maximumProduct(nums, n);

    return 0;
}

//Time complexity: o(nlogn)
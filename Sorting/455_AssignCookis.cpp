#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int findContentChildren(vector<int>&nums, int m, vector<int> &cookies, int n )
{
    sort(nums.begin(), nums.end());
    sort(cookies.begin(), cookies.end());

    int i=0, j=0, maxChild=0;

    while(i<m && j<n)
    {
        if(nums[i] <= cookies[j])
        {
           maxChild++;
           i++;
        }

        j++;
    }

    return maxChild;
}
int main()
{
    vector<int>nums = {1,2};
    vector<int>cookies = {1,1};

    int m = nums.size();
    int n = cookies.size();

    cout<<"Maximum number of content children:  "<<findContentChildren(nums, m, cookies, n);

    return 0;
}


//Asked in: Amazon
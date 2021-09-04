#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int heightChecker(vector<int> &nums, int n){
    vector<int>ans(nums);
    int m = ans.size();
    sort(ans.begin(), ans.end());

    int cnt=0, i=0, j=0;

    while(i<n && j<m){
        if(nums[i] != ans[j])
        {
            cnt++;
        }
        i++, j++;
    }

    return cnt;
}
int main(){
    vector<int>heights = {1,3,1,2,4,1,2};
    int n = heights.size();
    
    cout<<"Number of indecies: "<<heightChecker(heights, n);

    return 0;
}
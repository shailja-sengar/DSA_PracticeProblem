#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void squareOfSortedArray(vector<int> &nums, int n){
      vector<int>ans;
      for(int i=0; i<n; i++){
            ans.push_back(nums[i]*nums[i]);
      }

      sort(ans.begin(), ans.end());

      for(int i=0; i<ans.size(); i++){
          cout<<ans[i]<<" ";
      }
}

int main(){
    vector<int>nums = {-4,-2, 0, 3,1};
    int n = nums.size();

    squareOfSortedArray(nums, n);
    return 0;
}
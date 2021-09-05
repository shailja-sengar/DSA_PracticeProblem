#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int>> minAbsoluteDiff(vector<int> &arr, int n){
    sort(arr.begin(), arr.end());
    vector<vector<int>>ans;
    int min_diff = INT32_MAX;
    int curr_diff;
    for(int i=1; i<n; i++){
        curr_diff = arr[i] - arr[i-1];
          if(curr_diff == min_diff){
              ans.push_back({arr[i-1], arr[i]});
          }
           
           else if(curr_diff < min_diff){
               ans = {{arr[i-1], arr[i]}};
               min_diff = curr_diff;
           }
    }

    return ans;
}
int main(){
    vector<int>arr = {4,2,1,3};
    int n = arr.size();
    vector<vector<int>>ans;
   ans =  minAbsoluteDiff(arr, n);
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<< " ";
        }
    }

    return 0;
}
#include<iostream>
#include<vector>
#include<map>
using namespace std;

void relativeSortArray(vector<int> &arr1, vector<int> &arr2){
         map<int, int>mp;
         vector<int>ans;
         for(auto x : arr1){
             mp[x]++;
         }

         for(auto x : arr2){
             if(mp.find(x) != mp.end()){
                 auto temp = mp.find(x);
                 int cnt = temp->second;
                 vector<int>v(cnt, x);
                 ans.insert(ans.end(), v.begin(), v.end());
                 mp.erase(x);
             }
         }

         for(auto x : mp){
             int ele = x.first;
             int cnt = x.second;
             vector<int>v(cnt, ele);
             ans.insert(ans.end(), v.begin(), v.end());
         }

         for(int i=0; i<ans.size(); i++){
             cout<<ans[i]<<" ";
         }

}
int main(){
    vector<int>arr1 = {2,3,1,3,2,4,6,7,9,2,19};
    vector<int>arr2 = {2,1,4,3,9,6};

    relativeSortArray(arr1, arr2);

    return 0;
}
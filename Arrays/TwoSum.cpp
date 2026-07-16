#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
       
       unordered_map<int,int>m;
       for(int i=0;i<nums.size();i++){
          int curr=target-nums[i];
          if(m.find(curr)!=m.end()){
            ans.push_back(i);
            ans.push_back(m[curr]);
            break;
          }
          m[nums[i]]=i;
       }
       return ans;
    }
};
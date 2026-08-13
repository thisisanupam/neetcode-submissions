class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int> mp;
         vector<int> v;
         for(int i=0;i<nums.size();i++){
          mp[nums[i]]++;
         }
         for( auto &it : mp){
          if(it.second >=k){
            v.push_back(it.first);
          }
         }
         return v;
    }
};

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         unordered_map<int,int> mp;
         vector<int> v;
         vector<pair<int,int>> temp;
         for(int i=0;i<nums.size();i++){
          mp[nums[i]]++;
         }
         for( auto &it : mp){
           temp.push_back({it.second,it.first});
         }
         sort(temp.rbegin(),temp.rend());
         for(auto &it : temp){
          if(k==0){
            break;
          }
          v.push_back(it.second);
          k--;
         }
         return v;
    }
};

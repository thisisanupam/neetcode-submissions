class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int> prefixSum;
        int totalSum =0;
        prefixSum[0]=1;
        int ans =0;
        for(int i=0;i<nums.size();i++){
            totalSum+=nums[i];
            if(prefixSum.count(totalSum-k)){
               ans+=prefixSum[totalSum-k];
            }
            prefixSum[totalSum]++;
        }
        return ans;
    }
};
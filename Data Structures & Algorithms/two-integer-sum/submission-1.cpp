class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i=0,j=nums.size()-1;
        vector<int> v;
        while(i<j){
            int ans = nums[i]+nums[j];
           if(ans==target){
              v.push_back(i);
              v.push_back(j);
              break;
           }
           else if(abs(ans) > abs(target)){
              j--;
           }
           else{
            i++;
           }
        }
        return v;
    }
};

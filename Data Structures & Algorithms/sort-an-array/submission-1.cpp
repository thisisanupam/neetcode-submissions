class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
       priority_queue<int, vector<int>, greater<int>> min;
       vector<int> ans;
       for(int i=0;i<nums.size();i++){
        min.push(nums[i]);
       }
       for(int i=0;i<nums.size();i++){
        int a = min.top();
        ans.push_back(a);
        min.pop();
       }
        return ans;
    }
};
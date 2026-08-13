class Solution {
public:
    void sortColors(vector<int>& nums) {
    priority_queue<int, vector<int>, greater<int>> min;
       vector<int> ans;
       for(int i=0;i<nums.size();i++){
        min.push(nums[i]);
       }
       for(int i=0;i<nums.size();i++){
        int a = min.top();
        swap(nums[i],a);
        min.pop();
       }
    }
};
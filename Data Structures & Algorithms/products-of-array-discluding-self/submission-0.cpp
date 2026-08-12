class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
      vector<int> v;
      int max =1;
      int zero = 1;
      int zeroCount=0;
      for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
            zero = 0;
            zeroCount++;
        }
        else{
          max = nums[i] * max;
        }
      }
      for(int i=0;i<nums.size();i++){
        if(zeroCount>1){
            v.push_back(zero);
        }
        else if(nums[i]==0 && zeroCount==1){
           v.push_back(max);
        }
        else if(zero==0 && zeroCount==1){
            v.push_back(zero);
        }
        else{
        int temp = max/nums[i];
        v.push_back(temp);
        } 
      }
      return v;
    }
};

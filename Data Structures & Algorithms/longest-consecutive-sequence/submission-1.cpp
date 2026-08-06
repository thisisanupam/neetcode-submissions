#include<bits/stdc++.h>
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int cnt=1;
        int a =1;
        sort(nums.begin(),nums.end());
        if(nums.size()==0){
            return 0;
        }
        for(int i=1;i<nums.size();i++){
           if(abs(nums[i]-nums[i-1])==1){
             cnt++;
             a = max(a,cnt);
           }
           else if( abs(nums[i]-nums[i-1]) >1){
            cnt=1;
           }
        }
        return a;
    }
};

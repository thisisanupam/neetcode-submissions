#include<bits/stdc++.h>
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& str) {
      vector<vector<string>>  v;
      unordered_map<string,vector<string>> mp;
      vector<vector<string>> ans;
    //   sort + check if not + add index
    // if it there + take that index and current index value and store.
      for(int i=0;i<str.size();i++){
        string s = str[i];
        sort(s.begin(), s.end()); 
        mp[s].push_back(str[i]);
      }
      for(auto &it : mp){
          ans.push_back(it.second);
      }
      return ans;   
    }
};

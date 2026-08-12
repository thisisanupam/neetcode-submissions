#include<bits/stdc++.h>
class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(int i=0;i<strs.size();i++){
             string temp =  to_string(strs[i].size())+'#'+strs[i];
             s+= temp;
        }
        return s;
    }
    vector<string> decode(string s) {
        vector<string> original;
        int i=0;
        while(i<s.length()){
           int j = i;
           while(s[j]!='#'){
            j++;
           }
        int len = stoi(s.substr(i,j-i));
        string ans = s.substr(j+1,len);
        original.push_back(ans);   
        i = j+1 + len;
        }
        return original;
    }
};

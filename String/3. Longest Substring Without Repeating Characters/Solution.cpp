class Solution {
public:
    int lengthOfLongestSubstring(string s) {
         int ans=0;
    unordered_set<char>set;
    int i=0;
    int j=0;
    int n=s.size();
    while(i<n && j<n){
        if(set.find(s[j])==set.end()){
            set.insert(s[j++]);
            ans=max(ans,j-i);
        }
        else
            set.erase(s[i++]);
    }
    return ans;
    }
};

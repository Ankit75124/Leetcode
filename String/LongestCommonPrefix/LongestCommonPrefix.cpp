class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
         string ans = strs[0];
        for(int i = 1; i < strs.size(); i++)
        {
            string temp = "";
            int stringLength = ans.size();
            for(int j = 0; j < stringLength; j++)
            {
                if(j == strs[i].size())
                    break;
                if(ans[j] == strs[i][j])
                    temp+= ans[j];
                else 
                    break;
            }
            ans = temp;
        }
        return ans;
    }
};

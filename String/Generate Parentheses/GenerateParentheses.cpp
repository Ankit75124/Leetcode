class Solution {
public:
    
    void allParenthesis(string curr,int open,int close,int n,vector<string>&ans)
    {
        if(open==n && close==n)
        {
            ans.push_back(curr);
            return;
        }
        if(open<n)
            allParenthesis(curr+'(',open+1,close,n,ans);
        if(close<open)
            allParenthesis(curr+')',open,close+1,n,ans);
    }
    vector<string> generateParenthesis(int n) {
        vector<string>  ans;
        allParenthesis("",0,0,n,ans);
        return ans;
    }
};

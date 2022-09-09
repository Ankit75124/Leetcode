class Solution {
public:
    void func(vector<vector<int>> &ans, int l, int r, vector<int> v){
        if(l==r){
            ans.push_back(v);
        }
        else{
            for(int i=l; i<=r; i++){
                swap(v[l], v[i]);
                func(ans, l+1, r, v);
            }
        }
    }
    vector<vector<int>> permute(vector<int> &v){
        vector<vector<int>> ans;
        func(ans, 0, v.size()-1, v);
        return ans;
    }
};

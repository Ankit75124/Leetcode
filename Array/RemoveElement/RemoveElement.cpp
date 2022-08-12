class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        vector<int> num1;
        vector<int> :: iterator it;
        for(it=nums.begin();it<nums.end();it++)
        {
            if(*it==val){
                nums.erase(it);
                it--;
            }
        }
        return nums.size();
    }
};

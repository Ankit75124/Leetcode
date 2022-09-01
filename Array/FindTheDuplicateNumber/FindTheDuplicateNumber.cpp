class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i+1]-nums[i]==0)
                return nums[i];

        }
        return 0;
    }
};

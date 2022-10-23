class Solution {
public:
    static vector<int> findErrorNums(const vector<int>& nums) {
        const int n = size(nums);
        // The frequency is at most 2, hence a |char| is big enough, actually 2 bits would be enough.
        vector<char> freq(n + 1);
        for (int num : nums) ++freq[num];
        int dup = -1;
        int miss = -1;
        for (int i = 1; i <= n; ++i) {
            if (freq[i] == 2) {
                dup = i;
            } else if (freq[i] == 0) {
                miss = i;
            }
        }
        return {dup, miss};
    }
};

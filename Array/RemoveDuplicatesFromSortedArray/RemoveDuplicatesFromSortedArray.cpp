class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> :: iterator i;
        vector<int> num1;
        for(i=nums.begin();i<nums.end();i++){
            int k=*i;
            if(find(num1.begin(),num1.end(),k)!=num1.end()){
                nums.erase(i);
                i--;
            }
            else{
                num1.push_back(*i);
            }
        }
        return nums.size();
    }
};

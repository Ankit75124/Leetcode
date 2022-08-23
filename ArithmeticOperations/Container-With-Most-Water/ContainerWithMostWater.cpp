class Solution {
public:
    int maxArea(vector<int>& a) {
         int i=0,j=a.size()-1,maxi=-1e9;
        while(i<j)
        { maxi=max(maxi,min(a[i],a[j])*(j-i));
         if(a[i]<=a[j]) i++;
         else if(a[i]>a[j]) j--;}
         return maxi;
    }
};

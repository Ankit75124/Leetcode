class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        reverse(s.begin(),s.end());
        int i=0;
        int c=0;
        while(s[i]==' ' ){
            i++;
        }
        while(s[i]!=' ' && i<n){
            c++,i++;
        }
        return c;
    }
};

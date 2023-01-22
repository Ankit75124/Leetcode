class Solution {
public:
    char findTheDifference(string s, string t) {
        int sum=0;

        for(int i=0;i<t.length();i++){
            sum +=int(t[i]);
        }
        for(int i=0;i<s.length();i++){
            sum -=int(s[i]);
        }

        return char(sum);
    }
};

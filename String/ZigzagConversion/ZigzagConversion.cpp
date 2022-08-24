class Solution {
  public:
	string convert(string s, int numRows) { if (s.size() <= numRows || numRows == 1) return s;
		int currRow = (numRows*2) - 2, idx = 0;
		string result;
    
    while (idx < numRows) {
        int charPos = idx;
        
        while (charPos < s.size() + (numRows*2)-3) {
            if (idx > 0 && idx < (numRows -1) && charPos >= numRows) {
                if(charPos- (idx * 2) < s.size()) result.push_back(s.at(charPos- (idx * 2)));
            }
            if(charPos < s.size()) result.push_back(s.at(charPos));
            charPos += currRow;
        }
        idx++;
    }
    
    return result;                               
}
};

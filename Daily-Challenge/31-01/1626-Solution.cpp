class Solution {
public:
    int bestTeamScore(vector<int>& scores, vector<int>& ages) {
        int ans=0, n = ages.size();  // initialize answer to 0 and get the number of players
        int dp[n];  // dp array to store the maximum total score including the i-th player
        memset(dp, 0, sizeof dp);  // initialize dp array to 0
        vector<vector<int>> temp;  // 2D vector to store the negated ages and scores of the players
        for(int i=0;i<scores.size();i++)  // loop through all the scores
            temp.push_back({-ages[i], -scores[i]});  // negating the ages and scores and storing in temp
        sort(temp.begin(), temp.end());  // sort temp based on the first element of each subvector
        for(int i=0;i<n;i++){  // loop through all the players
            for(int j=i;j>=0;j--){  // inner loop to check the maximum total score including j-th player
                if(-temp[i][1] <= -temp[j][1])  // if score of i-th player is less than or equal to j-th player's score
                    dp[i] = max(dp[i], dp[j]-temp[i][1]);  // update the maximum total score including i-th player
            }
            ans = max(ans, dp[i]);  // update answer with the maximum total score including i-th player
        }
        return ans;  // return the final answer
    }
};

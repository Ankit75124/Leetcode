class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) 
    {
        int n=matches.size();             // number of players
        map<int,int> mpp;                 // map for storing losing frequency for a player
        
        int mx = INT_MIN;                 // for finding the max player id
        
        for(int i=0;i<n;i++)
        {
            mpp[matches[i][1]]++;                    // each time incraesse lost match frequency for current player;
            
            mx = max(mx,max(matches[i][0],matches[i][1]));
        }
        
        vector<bool> played(mx+1,false);                   // as given in the question we can chose only those players that have played at least one match
        for(int i=0;i<n;i++)
        {
            played[matches[i][0]] = true;                  // mark current player as played
            played[matches[i][1]] = true;
        }
        
        vector<int> win;                                   // winning players who did not lost any match mpp[player]=0
        vector<int> los_1;                                 // winning players who exactly lost 1 match mpp[player]=1
        for(int i=1;i<=mx;i++)
        {
            // if the player played at least one match only then we will check for next
            if(played[i] != false)
            {
                if(mpp[i]==0)
                    win.push_back(i);
                else if(mpp[i]==1)
                    los_1.push_back(i);
            }
            
        }
        
        return {win,los_1};
    }
};

//week08-1b.cpp 學習計畫 matrix 第一題 最有錢的錢
// leetcode 1672. Richest Customer Wealth
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int ans=0; //不知道先設0
        int m= accounts.size(),n=accounts[0].size();
        for (int i=0;i<m;i++){
            int now =0;
            for (int j=0;j<n;j++){
                now+=accounts[i][j];
            }
            if (now>ans) ans=now;
        }
        return ans;
    }
};

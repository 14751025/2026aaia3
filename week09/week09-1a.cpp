//week09-1a.cpp 學習計畫 matrix 第二題
//1572. Matrix Diagonal Sum 矩陣兩條對角線的數字加起來

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n =mat.size();
        int ans=0;
        for (int i=0;i<n;i++){
            ans += mat[i][i];
        }
        for (int i=0;i<n;i++){
            ans += mat [n-1-i][i];
        }
        if (n%2==1) ans -=mat[n/2][n/2];
        return ans;
    }
};

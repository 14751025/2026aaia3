//week09-1b.cpp 學習計畫 matrix 第二題
//1572. Matrix Diagonal Sum 矩陣兩條對角線的數字加起來

class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n =mat.size();
        int ans=0;
        for (int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j || i+j==n-1) ans+=mat[i][j];
            }

        }
        return ans;
    }
};

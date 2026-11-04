//week09-2.cpp 學習計畫 matrix 第四題
//73. Set Matrix Zeroes
//把0的直行橫行變0
class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        vector<int > left(m);
        vector<int> up(n);
        for (int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    left[i]=1;
                    up[j]=1;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(left[i]==1||up[j]==1) matrix [i][j]=0;
            }

    }
    }


};

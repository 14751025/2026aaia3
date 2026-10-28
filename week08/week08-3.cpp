//week08-3.cpp 學習計畫 matrix 第3題 螺旋矩陣印出來
//leetcode 54. Spiral Matrix

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        //右j++,左j--,下i++,上i--
        //設4變數left,right,up,down
        vector<int> ans;
        int m=matrix.size(),n=matrix[0].size();
        int left=0,right=n-1,up=0,down=m-1;
        while(ans.size() < m*n){
        for(int j=left;j<=right;j++) ans.push_back(matrix[up][j]);
        up++;
        for(int i=up;i<=down;i++) ans.push_back(matrix[i][right]);
        right--;

        if(ans.size()==m*n) break;
        for(int j=right;j>=left;j--) ans.push_back(matrix[down][j]);
        down--;
        for(int i=down;i>=up;i--) ans.push_back(matrix[i][left]);
        left++;
        }
        return ans;

    }
};

//week04-3.cpp 學習計畫第10題
// leetcode 896.Monotonic Array
//只會增加 只會減少 不會變化 叫單調
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        //紅色代表往上 綠色往下
        int red =0 ,green =0;
        for (int i=0;i<nums.size()-1;i++){
            if(nums[i] < nums[i+1])red++;
            if(nums[i] > nums[i+1])green++;

        }
        if (red==0 || green ==0) return true;
        return false;
    }
};

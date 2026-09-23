//week03-1.cpp 學習計畫 basic 第8題
//1822. Sign of the Product of an Array
//給你c++的陣列 nums ,請你把所有的數字乘起來,正的1,負的-1,剩下0
class Solution {
public:
    int arraySign(vector<int>& nums) {
        int n =nums.size();//陣列.size()大小
        int ans =1;
        int neg =0;
        for (int num:nums){
            if(num==0) return 0;
            if (num<0) neg++;
        }
        if (neg%2==0) return 1;
        return -1;
        //下面是錯的，太多數會爆炸
        //int ans =1; //
        //for(int i=0;i<n;i++){ //逐一乘起來
        //    ans=ans*nums[i];
        //}
        //if (ans>0) return 1;
        //if (ans<0) return -1;
        //return 0;
    }
};

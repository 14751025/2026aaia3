//week04-4.cpp 學習計畫 basic 第7題
//leetcode 66.plus one 加1
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n =digits.size();//有幾位數
        //int carry =0;//進位的英文
        int carry =1;//因為一開始就要在最右邊加一
        for(int i=n-1;i>=0;i--){//倒過來的迴圈
            int now = digits[i] + carry;
            carry =now /10;//進位
            digits[i] = now%10; //個位
        }
        if (carry>0) digits.insert(digits.begin(),carry);
        return digits;
    }
};

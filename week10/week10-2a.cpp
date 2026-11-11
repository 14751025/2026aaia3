//week10-2a.cpp 學習計畫 math 第一題
//1523. Count Odd Numbers in an Interval Range
class Solution {
public:
    int countOdds(int low, int high) {
        int ans=0;
        for(int i=low;i<=high;i++){
            if(i%2==1) ans++;
        }

        return ans;

        }


};

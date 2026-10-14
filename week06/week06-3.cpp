//week06-3.cpp 學習計畫 simulation 第2題
// leetcode 657.robot return to origin
//機器人 往上u 往左l 往右r 往下d,詢問是否回原點
class Solution {
public:
    bool judgeCircle(string moves) {
        //程式上三行下兩行不要動
        int x=0, y=0;
        for (char c : moves) { //week02 教string 及c++進階for 迴圈
            if (c=='U') y++;//上
            if (c=='D') y--;//下
            if (c=='L') x--;//左
            if (c=='R') x++;//右


        }
        if (x==0 && y==0) return true;
        else return false;
    }
};

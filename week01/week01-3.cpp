//week01-3.cpp 學習計畫basic第3題
// Leetcode 28. Find the Index of the First Occurrence in a String
//大海撈針 在一大堆稻草堆裡找針
class Solution {
public:
    int strStr(string haystack, string needle) {
        //所有的程式題目 都可以用 for if 函式呼叫
        int n1 =haystack.length(),n2 =needle.length();//函式呼叫 字串長度 .length()
        for (int i=0; i<= n1-n2;i++){//迴圈
            if (haystack.substr(i,n2)==needle ) return i;//找到答案
            //如果大字串的substr(開始,長度)等於 小字串 就找到答案了。

        }

        return -1;   //找不到
    }
};

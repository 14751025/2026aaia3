//week05-2.cpp 學習計畫 built-in function 第2題
//leetcode 709. to lower case 大寫變小寫
//leetcode 偷偷寫好了#include <cctype>
class Solution {
public:
    string toLowerCase(string s) {
        for (int i=0;i<s.length();i++){
            s[i]=tolower(s[i]);//前面記得 #include <cctype>

        }
        return  s;
    }
};

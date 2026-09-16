//week02-3.cpp 學習計畫 basic 第1題
//leetcode 1768. Merge Strings Alternately
//上週教字串長度.length()
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1 =word1.length(),n2 =word2.length();//字串長度
        string ans;//用來放答案的字串
        for (int i=0;i<max(n1,n2);i++){//(比較長的為主)逐一檢查 插入
            if(i<n1) ans+=word1[i];//i 沒超過範圍 就插入word1[i]
            if(i<n2) ans+=word2[i];//i 沒超過範圍 就插入word2[i]


        }
        return ans; //答案在這
    }
};

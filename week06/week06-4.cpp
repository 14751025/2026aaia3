//week06-4.cpp 學習計畫 simulation 第3題
// leetcode 682. Baseball Game
// 5: 陣列裡 5
// 2: 陣列裡 5 2
// C: 陣列裡 5(刪掉最後的2)
// D: 陣列裡5 10(把最後的5變2倍塞入 )
// +: 陣列裡 5 10 15(最後2個數 5+10變15塞入)
//答案是把所有數加起來
class Solution {
public:
    int calPoints(vector<string>& operations) {
        //遇到simulation模擬 就用for 迴圈
        //week03 week04教過c++進階for迴圈for (char c:s) for (int num:a)
        vector <int>a;
        for (string s:operations){//大資料結構 vector裡 裝小資料結構 string

            if (s=="C") {

                a.pop_back();
            }else if (s=="D"){
                a.push_back(a[a.size()-1]*2);

            }else if (s=="+"){
                a.push_back(a[a.size()-2] + a[a.size()-1]);

            }else{
                //有三種方法 可以把string 變int整數
                //a.push_back( stoi(s) );
                //a.push_back( atoi(s.c_str()));
                int now;
                stringstream ss(s);
                ss>>now;
                a.push_back(now);

            }



        }
        int ans =0;
        for (int num:a){
            ans+=num;

        }
        return ans;
    }
};

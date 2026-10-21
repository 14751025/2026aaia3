//week07-2.cpp 學習計畫 simulation 第三題
//1275. Find Winner on a Tic Tac Toe Game
class Solution {
public://大資料結構 moves裡面放 中資料結構 move 裡面放小資料結構int i,j
    string tictactoe(vector<vector<int>>& moves) {
        int a[3][3] ={0};
        int who =1; //1A2B現在輪到誰
        string whotable[3] ={"Draw","A","B"};
        for(vector<int>move :moves){

            int i =move[0] ,j=move[1];
            a[i][j]=who;   //要放會變動的{誰}
            if(a[0][0]==a[0][1]&&a[0][1]==a[0][2]&& a[0][2]==who) return whotable[who];
            if(a[1][0]==a[1][1]&&a[1][1]==a[1][2]&& a[1][2]==who) return whotable[who];
            if(a[2][0]==a[2][1]&&a[2][1]==a[2][2]&& a[2][2]==who) return whotable[who];
            if(a[0][0]==a[1][0]&&a[1][0]==a[2][0]&& a[2][0]==who) return whotable[who];
            if(a[0][1]==a[1][1]&&a[1][1]==a[2][1]&& a[2][1]==who) return whotable[who];
            if(a[0][2]==a[1][2]&&a[1][2]==a[2][2]&& a[2][2]==who) return whotable[who];
            if(a[0][0]==a[1][1]&&a[1][1]==a[2][2]&& a[2][2]==who) return whotable[who];
            if(a[2][0]==a[1][1]&&a[1][1]==a[0][2]&& a[0][2]==who) return whotable[who];
            if (who==1)who=2;//換2B
            else who =1;//換1A
            //myshowtable(a); 暫時印出而已
        }
        if(moves.size()==9)return "Draw";
        else return "Pending";
    }

    void myshowtable (int a[3][3]){//自己寫的秀板子的程式
        for (int i;i<3;i++){
            for (int j ;j<3;j++){
                cout <<a[i][j]<<" ";
            }
            cout<<"\n";
        }
        cout<<"\n";
    }
};

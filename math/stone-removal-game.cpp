class Solution {
public:
    bool canAliceWin(int n) {
        int ali = 10;
        bool win = true;
        while(n>=ali){
            n -= ali;
            ali--;
            win = !win;
        }
        return !win;
    }
};
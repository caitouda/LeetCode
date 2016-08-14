class Solution {
public:
    bool canWinNim(int n) {
        bool win;
        if(n%4 != 0)
            win = true;
        else
            win = false;
        return win;
    }
};
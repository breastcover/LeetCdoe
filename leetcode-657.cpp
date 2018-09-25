class Solution {
public:
    bool judgeCircle(string moves) {
        int uNum=0;
        int dNum=0;
        int lNum=0;
        int rNum=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='U')
                uNum++;
            if(moves[i]=='D')
                dNum++;
            if(moves[i]=='L')
                lNum++;
            if(moves[i]=='R')
                rNum++;
        }
        int h=lNum-rNum;
        int v=uNum-dNum;
        if(h==0&&v==0)
            return true;
        return false;
    }
};

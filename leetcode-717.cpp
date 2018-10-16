class Solution {
public:
    bool isOneBitCharacter(vector<int>& bits) {
        bool c;
        for(int i=0;i<bits.size();)
        {
            if(bits[i]==1)
            {
                c=0;
                i+=2;
            }
            else
            {
                c=1;
                i++;
            }
        }
        return c;

    }
};

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        bitset<32> b{n};
        int l=0,h=31;
        while(l<h)
        {
            bool tmp=b[l];
            b[l]=b[h];
            b[h]=tmp;
            l++;
            h--;
        }
        return b.to_ulong();
    }
};

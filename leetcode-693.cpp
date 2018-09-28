class Solution {
public:
    bool hasAlternatingBits(int n) {
        return !((n^=n/2)&n+1);
    }
};

class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        int res=0;
        unordered_map<int,int> m;
        for(auto e:deck)
            m[e]++;
        for(auto e:m)
            res=__gcd(e.second,res);
        return res>1;
    }
};

class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        if(k<0)
            return 0;
        int cnt=0;
        unordered_map<int,int> m;
        for(auto n:nums) m[n]++;
        for(auto p:m)
        {
            if(!k&&p.second>1||k&&m.count(p.first+k))
                ++cnt;
        }
        return cnt;
    }
};

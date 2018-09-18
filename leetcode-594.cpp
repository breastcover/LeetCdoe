class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto num:nums)
            m[num]++;
        int res=0;
        for(auto it:m)
        {
            if(m.count(it.first-1)>0)
                res=max(res,m[it.first-1]+it.second);
        }
        return res;
    }
};

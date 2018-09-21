class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            int j=i+1;
            m[j]=0;
        }
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        vector<int> res;
        for(auto iter=m.begin();iter!=m.end();iter++)
        {
            if(iter->second==2)
                res.push_back(iter->first);

        }for(auto iter=m.begin();iter!=m.end();iter++)
        {
            if(iter->second==0)
                res.push_back(iter->first);
        }
        return res;
    }
};

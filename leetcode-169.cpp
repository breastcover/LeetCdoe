class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(auto iter=nums.begin();iter!=nums.end();iter++)
        {
            if(m[*iter]==NULL)
                m[*iter]=1;
            else
                m[*iter]++;
        }
        int max=0;
        for(auto iter=nums.begin();iter!=nums.end();iter++)
        {
            if(m[*iter]>max)
                max=m[*iter];
        }
        for(auto iter=nums.begin();iter!=nums.end();iter++)
        {
            if(m[*iter]==max)
                return *iter;
        }
    }
};

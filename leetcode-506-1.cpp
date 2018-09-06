class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        vector<string> res(nums.size());
        unordered_map<int,int> numsPosition;
        for(int i=0;i<nums.size();i++)
        {
            numsPosition[nums[i]]=i;
        }
        sort(nums.begin(),nums.end(),[](int a,int b){return b<a;});
        for(auto iter=numsPosition.begin();iter!=numsPosition.end();iter++)
        {
            for(int i=0;i<nums.size();i++)
            {
                if(iter->first==nums[i])
                {
                    if(i==0)
                        res[iter->second]="Gold Medal";
                    else if(i==1)
                        res[iter->second]="Silver Medal";
                    else if(i==2)
                        res[iter->second]="Bronze Medal";
                    else
                        res[iter->second]=to_string(i+1);
                }
            }
        }
        return res;
    }
};

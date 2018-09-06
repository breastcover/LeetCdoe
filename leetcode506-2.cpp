class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        string score[3]={"Gold Medal", "Silver Medal","Bronze Medal"};
        vector<string> res(nums.size());
        map<int,int> numsPosition;
        for(int i=0;i<nums.size();i++)
        {
            numsPosition[nums[i]]=i;
        }
        int i=0;

        for(auto iter=numsPosition.rbegin();iter!=numsPosition.rend();iter++)
        {

            if(i<3)
                res[iter->second]=score[i++];
            else
                res[iter->second]=to_string(++i);
        }
        return res;
    }
};

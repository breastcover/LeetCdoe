class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> us_1;
        vector<int> vec;
        for(auto num:nums1)
            us_1.insert(num);
        for(auto num:nums2)
        {
            if(us_1.find(num)!=us_1.end())
                vec.push_back(num);
            us_1.erase(num);
        }

        return vec;
    }
};

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> um;
        vector<int> vec;
        for(auto num:nums1)
            ++um[num];
        for(auto num:nums2)
        {
            if(--um[num]>=0)
                vec.push_back(num);
        }
        return vec;
    }
};
